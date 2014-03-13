#include <stdio.h>
#include "wetparse.h"
#include <stdlib.h>
#include "parser.h"
#include <math.h>

/* An initial naming error was made, thus every parse_xx 
	can be unterstood as interpret_xx. This propably won't ever
 	be changed because parse is much easier to type and much 
 	shorter than interpret */

/* necessary global datastructures like the id_table-Stack */
static struct sstack *id_table_stack;
static struct dyn_arr *glob_function_list;

int *rc;

/* necessary global flags */
static int assign_flag = 0;

/* functions that are only used within this file*/
int get_operation(struct nary_node *node);
char *get_str(struct nary_node *node);
struct value *get_value(struct nary_node *node);
struct dyn_arr *get_arr(struct nary_node *node);
int *get_num(struct nary_node *node);
static void print_tabl_stack();


int interpreter_init(){
	con_log("initialize interpreter", 
			"interpreter_init()", LOG_DEBUG);
	con_log("initialize mem_alloc", 
			"interpreter_init()", LOG_DEBUG);
	mem_init();

	con_log("initialize id_table", 
			"interpreter_init()", LOG_DEBUG);
	id_table_stack = sstack_init();
	if(id_table_stack == NULL){
		con_log("could not initialize the id table stack", 
				"interpreter_init()", LOG_ERROR);
		return -1;
	}

	rc = (int *) malloc(sizeof(int));
	if(rc == NULL) {
		con_log("could not allocate memory for returncode", 
				"interpreter_init()", LOG_ERROR);
		return -1;
	}

	con_log("init is done", 
			"interpreter_init()", LOG_DEBUG);

	return 0;	
}

int interpreter_cleanup(){
	con_log("Freeing the ressources the interpreter needet",
			"interpreter_cleanup()", LOG_DEBUG);
	//TODO
	return 0;
}

void parse_program(struct nary_node *node){
#ifdef DEBUG
	printf("Interpret AST non-interactively\n");
#endif
	struct id_tab *newtab = tab_init();
	if(sstack_push(id_table_stack, (void*) newtab)){
		con_log("new id table could not be pushed", 
				"parse_program()", LOG_ERROR);
		return;
	}
	parse_stmtlist(node->nodes[0]);
}

void parse_program_interactive(struct nary_node *node, int *first){
#ifdef DEBUG
	printf("Interpret AST interaktively\n");
#endif
	struct id_tab *newtab = tab_init();
	if(*first){
		if(sstack_push(id_table_stack, (void*) newtab)){
			con_log("new id table could not be pushed", 
					"parse_program()", LOG_ERROR);
			return;
		}
		*first = 0;
	}
	parse_stmt(node->nodes[0]);
}

void parse_stmtlist(struct nary_node *node){
	if(get_operation(node) == P_OP_STMTLST){
		parse_stmtlist(node->nodes[0]);
		parse_stmt(node->nodes[1]);
		/*print_tabl_stack();*/
	} else { /* last node of a stmtlist subtree equals the 
				first statement */
		parse_stmt(node->nodes[0]);
		/*print_tabl_stack();*/
	}
}

struct dyn_arr *parse_explist(struct nary_node *node){
	if(get_operation(node) == P_OP_EXPLST) {
		struct dyn_arr *temp = parse_explist(node->nodes[0]);
		/* the dynamical array resides in the content of temp */
		arr_add_value(temp, (void *) 
							parse_expression(node->nodes[1]));
		return temp;
	} else { //node is of type P_OP_EXP
		/* Create dynamical list and add the first evaluated expression */
		struct dyn_arr *lst = arr_init();
		if(arr_add_value(lst, (void *) parse_expression(node->nodes[0])))
			con_log("Error while parsing exp in explist", 
					"parse_explist()", LOG_ERROR);
		return lst;
	}
}

struct dyn_arr *parse_arglist(struct nary_node *node){
	return NULL;

}

struct dyn_arr *parse_varlist(struct nary_node *node){
	if(get_operation(node) == P_OP_VARLST) {
		struct dyn_arr *temp = parse_varlist(node->nodes[0]);
		/* the same as in parse_explist */
		arr_add_value(temp, (void *) 
							parse_varexpression(node->nodes[1]));
		return temp;
	} else {
		struct dyn_arr *lst = arr_init();	
		arr_add_value(lst, (void *) parse_varexpression(node->nodes[0]));
		return lst;
	}
}

/* interprets an assignment */
void parse_assignment(struct nary_node *node){
	int i, rc;

	/* if assing_flag = 1, the parse_varexpression will only search
	 	for the value structure pointer on top of the stack. */
	assign_flag = 1;
	struct dyn_arr *varlist = parse_varlist(node->nodes[0]);
	assign_flag = 0;
	struct dyn_arr *explist = parse_explist(node->nodes[1]);

	if(varlist == NULL|| explist == NULL) {
		con_log("varlist and explist are invalid", 
				"parse_assignment()", LOG_ERROR);
		return;
	}

	if(varlist->num != explist->num) {
		con_log("Length of var- and explist differ. Assignment not executed.", 
				"parse_assignment()", LOG_ERROR);
		return;
	}
	
	/* adds the values from explist to the id_list using the */
	struct id_tab *head = sstack_head(id_table_stack, &rc);
	if(rc == -1)
		con_log("Error while getting head from id_table_stack",
				"parse_assignment()", LOG_ERROR);
	for(i=0; i<varlist->num; i++){
		struct value *cvar = (struct value *) varlist->arr[i];
		struct value *cval = (struct value *) explist->arr[i];

		/* Var isn't yet associated with a value */
		if(cvar->type == P_TYPE_ID)	{
#ifdef DEBUG
			printf("Adding value\n");
#endif
			/* We have to mark the value as non_writable for the parse
			 	expression routine. This happens by calling make_valueCpy */

			/* first we try to change the value, if that fails, the
				var does not exist and we can add it. */
			if(tab_add_value(head, make_valueCpy(cval), (char *) cvar->c)){
				con_log("Error while adding the variable", 
						"parse_assingment()", LOG_STRONG);
				return;
			}

		/* cvar contains the old value that has to be altered */
		} else {
#ifdef DEBUG
			printf("Changed value\n");
#endif
			free(cvar->c);
			cvar->c = cval->c;
			cvar->type = cval->type;
		}
	}

	/* We have to reset the mem_alloc list because we don't need
	 	the temporarily created value structures in parse_expression()
	 	anymore */
	mem_reset();

	free(varlist->arr);
	free(explist->arr);
	free(varlist);
	free(explist);
}

void parse_break(struct nary_node *node){
	printf("[BREAK]\n");	
}

void parse_continue(struct nary_node *node){
	printf("[CONTINUE]\n");	
}

void parse_print(struct nary_node *node){
	struct value *val = parse_expression(node);	

	switch(val->type){
		case P_TYPE_STRING:
			printf("[PRINT] [%s]\n", (char *) val->c);
			break;
		case P_TYPE_INT:
			printf("[PRINT] [%d]\n", *((int *) val->c));
			break;
		case P_TYPE_DOUBLE:
			printf("[PRINT] [%lf]\n", *((double *) val->c));
			break;
		default:
			printf("[PRINT] [unimplemented type]\n");
			break;
	}

	if(val->flag == P_FLAG_NONE){
		mem_reset();
		free(val->c);
	}
}

void parse_if(struct nary_node *node){
	struct value *tf = parse_expression(node->nodes[0]);
	if(tf->type == P_TYPE_INT && *((int *) tf->c))
		parse_block(node->nodes[1]);
}

void parse_else(struct nary_node *node){
	struct value *tf = parse_expression(node->nodes[0]);
	if(tf->type == P_TYPE_INT && *((int *) tf->c))
		parse_block(node->nodes[1]);
	else 
		parse_block(node->nodes[2]);
}

void parse_forin(struct nary_node *node);

void parse_for(struct nary_node *node){
	int rc;
	struct nary_node *tmp = node->nodes[3];
	struct value *eval;

	struct id_tab *newtab = tab_init();
	if(sstack_push(id_table_stack, (void*) newtab)){
		con_log("new id table could not be pushed", 
				"parse_while()", LOG_ERROR);
		return;
	}
	
	parse_assignment(node->nodes[0]);
	eval = parse_expression(node->nodes[1]);
	if(eval->type != P_TYPE_INT){
		con_log("Invalid value for for-Loop", 
				"parse_for()", LOG_ERROR);
		return;
	}

	while(*((int *) eval->c)){
		parse_stmtlist(tmp->nodes[0]);
		parse_assignment(node->nodes[2]);
		eval = parse_expression(node->nodes[1]);
	}

	sstack_pop(id_table_stack, &rc);
	if(rc){
		con_log("new id table could not be popped", 
				"parse_while()", LOG_ERROR);
		return;
	}
}

/* does'nt use parse_block, because this would be very 
   	inefficient*/
void parse_while(struct nary_node *node){
	int rc;
#ifdef DEBUG
	printf("++Entering While\n");
#endif
	struct nary_node *tmp = node->nodes[1];
	struct value *eval;

	struct id_tab *newtab = tab_init();
	if(sstack_push(id_table_stack, (void*) newtab)){
		con_log("new id table could not be pushed", 
				"parse_while()", LOG_ERROR);
		return;
	}

	eval = parse_expression(node->nodes[0]);
	while(*((int *) eval->c)){
		parse_stmtlist(tmp->nodes[0]);
		if(eval->flag == P_FLAG_NONE){
			free(eval->c);
			mem_reset();
		}
		eval = parse_expression(node->nodes[0]);
	}

	sstack_pop(id_table_stack, &rc);
	if(rc){
		con_log("new id table could not be popped", 
				"parse_while()", LOG_ERROR);
		return;
	}
#ifdef DEBUG
	printf("++Leaving While\n");
#endif
}

void parse_dowhile(struct nary_node *node){
	int rc;
#ifdef DEBUG
	printf("++Entering Do-while\n");
#endif
	struct nary_node *tmp = node->nodes[1];
	struct value *eval = mem_nextValInt();

	struct id_tab *newtab = tab_init();
	if(sstack_push(id_table_stack, (void*) newtab)){
		con_log("new id table could not be pushed", 
				"parse_dowhile()", LOG_ERROR);
		return;
	}

	do {
		parse_stmtlist(tmp->nodes[0]);
		if(eval->flag == P_FLAG_NONE){
			free(eval->c);
			mem_reset();
		}
		eval = parse_expression(node->nodes[0]);
	} while(*((int *) eval->c));

	sstack_pop(id_table_stack, &rc);
	if(rc){
		con_log("new id table could not be popped", 
				"parse_dowhile()", LOG_ERROR);
		return;
	}
#ifdef DEBUG
	printf("++Leaving Do-while\n");
#endif
}

void parse_switch(struct nary_node *node);
void parse_fceblock(struct nary_node *node); 


void parse_stmt(struct nary_node *node){
	switch(get_operation(node)){
		case P_OP_ASSIGN:
			parse_assignment(node->nodes[0]);
			break;
		case P_OP_BREAK:
			parse_break(NULL);
			break;
		case P_OP_CONTINUE:
			parse_continue(NULL);
			break;
		case P_OP_BLOCK:
			parse_block(node->nodes[0]);
			break;
		case P_OP_PRINT:
			parse_print(node->nodes[0]);
			break;
		case P_OP_INC:
			parse_inc(node->nodes[0]);
			break;
		case P_OP_DEC:
			parse_dec(node->nodes[0]);
			break;
		case P_OP_CALL:

			break;
		case P_OP_IF:
			parse_if(node);	
			break;
		case P_OP_ELSE:
			parse_else(node);
		case P_OP_FOR:
			parse_for(node);
			break;
		case P_OP_FORIN:

			break;
		case P_OP_WHILE:
			parse_while(node);
			break;
		case P_OP_DOWH:
			parse_dowhile(node);
			break;
		case P_OP_SWITCH:

			break;
		case P_OP_FCEB:

			break;
		case P_OP_NOOP:
			/* No operation used int interactie mode*/
			break;
		default:
			break;
	}
	
}	

void parse_inc(struct nary_node *node){
	struct value *val = parse_varexpression(node);
#ifdef DEBUG
	printf("inc: Pointer zur Wertstruktur: %p\n", val);
	printf("inc: Pointer zum Wert: %p\n", val->c);
#endif
	switch(val->type){
		case P_TYPE_INT:
			++*((int *) val->c);
			break;
		case P_TYPE_DOUBLE:
			++*((double *) val->c);
			break;
		default:
			con_log("Unimplemented type", 
					"parse_inc()", LOG_ERROR);
			break;
	}
}

void parse_dec(struct nary_node *node){
	struct value *val = parse_varexpression(node);
	switch(val->type){
		case P_TYPE_INT:
			--*((int *) val->c);
			break;
		case P_TYPE_DOUBLE:
			--*((double *) val->c);
			break;
		default:
			con_log("Unimplemented type", 
					"parse_inc()", LOG_ERROR);
			break;
	}
}

/* Operations */
struct value *parse_expression(struct nary_node *node){
	struct value *ops[2];
	struct value *result;
	switch(get_operation(node)){
		case P_OP_OR:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			if(ops[0]->type == P_TYPE_INT 
			&& ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) || 
										*((int *) ops[1]->c);
			} else if(ops[0]->type == P_TYPE_INT 
			&& ops[1]->type == P_TYPE_DOUBLE) {
				*((int *) result->c) = *((int *) ops[0]->c) || 
										*((double *) ops[1]->c);
			} else if(ops[0]->type == P_TYPE_DOUBLE 
			&& ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((double *) ops[0]->c) || 
										*((int *) ops[1]->c);
			} else {
				*((int *) result->c) = *((double *) ops[0]->c) || 
										*((double *) ops[1]->c);
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_AND:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			if(ops[0]->type == P_TYPE_INT 
			&& ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) && 
										*((int *) ops[1]->c);
			} else if(ops[0]->type == P_TYPE_INT 
			&& ops[1]->type == P_TYPE_DOUBLE) {
				*((int *) result->c) = *((int *) ops[0]->c) && 
										*((double *) ops[1]->c);
			} else if(ops[0]->type == P_TYPE_DOUBLE 
			&& ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((double *) ops[0]->c) && 
										*((int *) ops[1]->c);
			} else {
				*((int *) result->c) = *((double *) ops[0]->c) && 
										*((double *) ops[1]->c);
			}
			
			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_BINOR:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) | *((int *) ops[1]->c);
				return result;
			} else {
				con_log("This Operation currently makes no sense!", 
						"parse_expression()", LOG_ERROR);	
			}
			
			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_BINXOR:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) ^ *((int *) ops[1]->c);
				return result;
			} else {
				con_log("This Operation currently makes no sense!", 
						"parse_expression()", LOG_ERROR);	
			}
			
			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_BINAND:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) & *((int *) ops[1]->c);
				return result;
			} else {
				con_log("This Operation currently makes no sense!", 
						"parse_expression()", LOG_ERROR);	
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_EQUAL:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			/* evaluation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((int *) ops[0]->c) == *((int *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((int *) result->c) = *((int *) ops[0]->c) == *((double *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((double *) ops[0]->c) == *((int *) ops[1]->c);
				} else {
					*((int *) result->c) = *((double *) ops[0]->c) == *((double *) ops[1]->c);
				}

				return result;
			} else {
				//TODO
			}
			
			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_NOTEQUAL:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}
			
			/* evaluation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((int *) ops[0]->c) != *((int *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((int *) result->c) = *((int *) ops[0]->c) != *((double *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((double *) ops[0]->c) != *((int *) ops[1]->c);
				} else {
					*((int *) result->c) = *((double *) ops[0]->c) != *((double *) ops[1]->c);
				}

				return result;
			} else {
				//TODO
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_GREATERTHAN:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			/* evaluation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((int *) ops[0]->c) >= *((int *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((int *) result->c) = *((int *) ops[0]->c) >= *((double *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((double *) ops[0]->c) >= *((int *) ops[1]->c);
				} else {
					*((int *) result->c) = *((double *) ops[0]->c) >= *((double *) ops[1]->c);
				}

				return result;
			} else {
				//TODO
			}
			
			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_LESSTHAN:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			/* evaluation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((int *) ops[0]->c) <= *((int *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((int *) result->c) = *((int *) ops[0]->c) <= *((double *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((double *) ops[0]->c) <= *((int *) ops[1]->c);
				} else {
					*((int *) result->c) = *((double *) ops[0]->c) <= *((double *) ops[1]->c);
				}

				return result;
			} else {
				//TODO
			}
			
			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_LESS:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			/* evaluation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((int *) ops[0]->c) < *((int *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((int *) result->c) = *((int *) ops[0]->c) < *((double *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((double *) ops[0]->c) < *((int *) ops[1]->c);
				} else {
					*((int *) result->c) = *((double *) ops[0]->c) < *((double *) ops[1]->c);
				}

				return result;
			} else {
				//TODO
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_GREATER:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			/* evaluation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((int *) ops[0]->c) > *((int *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((int *) result->c) = *((int *) ops[0]->c) > *((double *) ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((int *) result->c) = *((double *) ops[0]->c) > *((int *) ops[1]->c);
				} else {
					*((int *) result->c) = *((double *) ops[0]->c) > *((double *) ops[1]->c);
				}

				return result;
			} else {
				//TODO
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return NULL;
			break;
		case P_OP_LEFTSHIFT:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integers only */
			if(ops[0]->type == P_TYPE_INT && ops[0]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) << *((int *) ops[1]->c);
			} else {
				con_log("This Operation only works on integral types", 
						"parse_expression()", LOG_ERROR);
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_RIGHTSHIFT:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integer or floating point numbers */
			if(ops[0]->type == P_TYPE_INT && ops[0]->type == P_TYPE_INT) {
				*((int *) result->c) = *((int *) ops[0]->c) >> *((int *) ops[1]->c);
			} else {
				con_log("This Operation only works on integral types", 
						"parse_expression()", LOG_ERROR);
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_PLUS:
			//Get the operands
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValDbl();
#ifdef DEBUG
				printf("New val generated (PLUS)\n");
#endif
			} else {
				result = ops[0];
			}
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_INT;
					*((int*) result->c) = *((int*)ops[0]->c) + *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((double*) result->c) = *((int*)ops[0]->c) + *((double *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) result->c) = *((double*)ops[0]->c) + *((int *)ops[1]->c);
				} else {
					*((double*) result->c) = *((double*)ops[0]->c) + *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_MINUS:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValDbl();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_INT;
					*((int*) result->c) = *((int*)ops[0]->c) - *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((double*) result->c) = *((int*)ops[0]->c) - *((double *)ops[1]->c);
					ops[0]->type = P_TYPE_DOUBLE;
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) result->c) = *((double*)ops[0]->c) - *((int *)ops[1]->c);
				} else {
					*((double*) result->c) = *((double*)ops[0]->c) - *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}

			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_MUL:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
#ifdef DEBUG
				printf("Objekt ist readonly. Erstelle Kopie\n");
#endif
				result = mem_nextValDbl();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_INT;
					*((int*) result->c) = *((int*)ops[0]->c) * *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					*((double*) result->c) = *((int*)ops[0]->c) * *((double *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) result->c) = *((double*)ops[0]->c) * *((int *)ops[1]->c);
				} else {
					*((double*) result->c) = *((double*)ops[0]->c) * *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}

			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_DIV:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValDbl();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_INT;
					*((int*) result->c) = *((int*)ops[0]->c) / *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = *((int*)ops[0]->c) / *((double *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = *((double*)ops[0]->c) / *((int *)ops[1]->c);
				} else {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = *((double*)ops[0]->c) / *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_MOD:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValDbl();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integer or floating point numbers */
			if(ops[0]->type == P_TYPE_INT || ops[1]->type == P_TYPE_INT) {
				result->type = P_TYPE_INT;
				*((int*) result->c) = *((int*)ops[0]->c) % *((int *)ops[1]->c);
			} else {
				con_log("This Operation only works on integral types", 
						"parse_expression()", LOG_ERROR);
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result; 
			break;
		case P_OP_POW:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValDbl();
			} else {
				result = ops[0];
			}
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = pow(*((int*)ops[0]->c), *((int *)ops[1]->c));
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = pow(*((int*)ops[0]->c), *((double *)ops[1]->c));
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = pow(*((double*)ops[0]->c), *((int *)ops[1]->c));
				} else {
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = pow(*((double*)ops[0]->c), *((double *)ops[1]->c));
				}

			} else {
				//Errorhandling!
			}

			/* prevent a memory leak */
			if(ops[1]->flag == P_FLAG_NONE)
				free(ops[1]->c);
			return result;
			break;
		case P_OP_UMINUS:
			ops[0] = parse_expression(node->nodes[0]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValDbl();
			} else {
				result = ops[0];
			}

			switch(ops[0]->type){
				case P_TYPE_INT:
					result->type = P_TYPE_INT;
					*((int*) result->c) = (-1) * *((int*)ops[0]->c);
					break;
				case P_TYPE_DOUBLE:
					result->type = P_TYPE_DOUBLE;
					*((double*) result->c) = (-1) * *((double*)ops[0]->c);
					break;
				default:
					//Error
					break;
			}
			
			return result;
			break;
		case P_OP_COMPL:
			ops[0] = parse_expression(node->nodes[0]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}
			
			switch(ops[0]->type){
				case P_TYPE_INT:
					*((int*) result->c) = ~ *((int*)ops[0]->c);
					break;
				default:
					//Error
					break;
			}

			return result;
			break;
		case P_OP_NOT:
			ops[0] = parse_expression(node->nodes[0]);
			if(ops[0]->flag == P_FLAG_RO) {
				result = mem_nextValInt();
			} else {
				result = ops[0];
			}

			if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
				*((int *) result->c) = ! *((int *) ops[0]->c);
			} else {
				con_log("This Operation currently only works whith integral types !", 
						"parse_expression()", LOG_ERROR);	
			}

			return result;
			break;
		case INT:
			return get_value(node);
			break;
		case NUMBER:
			return get_value(node);
			break;
		case STRING:
			return get_value(node);
			break;
		case TRUE:
			return get_value(node);
			break;
		case FALSE:
			return get_value(node);
			break;
		case P_OP_LSTCONST:
			return parse_lstconst(node->nodes[0]);
			break;
		case P_OP_STRDEF:
			return parse_fficonst(node->nodes[0]);
			break;
		case P_OP_EVEXP:
			return parse_evalexpression(node->nodes[0]);
			break;
		default:		
			con_log("Somethin went wrong", 
					"parse_expression()", LOG_ERROR);
			return NULL;
			break;
	}
}

struct value *parse_lstconst(struct nary_node *node){
	return NULL;
}

struct value *parse_fficonst(struct nary_node *node){
	return NULL;
}

struct value *parse_evalexpression(struct nary_node *node){
	switch(get_operation(node)){
		case P_OP_FCEXP:
			return parse_fceexp(node->nodes[0]);
			break;
		case P_OP_FCRC:
			return parse_fceexp_rc(node->nodes[0]);
			break;
		case P_OP_VAREXP:
			return parse_varexpression(node->nodes[0]);
			break;
		case P_OP_CALL:
			return parse_functioncall(node->nodes[0]);
			break;
		case P_OP_EXP:
			return parse_expression(node->nodes[0]);
			break;
		default:
			return NULL;
			break;
	}
}

/* TODO: comment is obsolete */
/* Returns a valure structure representing the id or the value of the id.
 	If no value is associated with the identifier, then the identifier 
	itself is returned, else the first value tied to it is returned. */
struct value *parse_varexpression(struct nary_node *node){
	int i, rc;
	struct id_tab *ctab;
	struct value *idstr;
	struct value *ret;
	switch(get_operation(node)){
		case ID:
			idstr = get_value(node);
			if(!assign_flag){
				/* search for the value associated with the id */
				for(i=0; i<id_table_stack->num; i++) {
					ctab = slist_get_at(i, id_table_stack->stack, &rc);
					if(rc)
						con_log("Error while taking new id_table", 
								"parse_varexpression()", LOG_ERROR);

					ret = tab_get_value(ctab, (char *) idstr->c);
#ifdef DEBUG
					printf("parse_varexp: Durchlauf %d. Pointer: %p\n", i, ret);
#endif
					if(ret != NULL)
						return ret;
				}
				return NULL;
			} else {
				ctab = sstack_head(id_table_stack, &rc);
				if(rc)
					con_log("Error while taking head id_table", 
							"parse_varexpression()", LOG_ERROR);
				ret = tab_get_value(ctab, (char *) idstr->c);
				if(ret != NULL)
					return ret;
				return idstr;
			}
			break;
		case P_OP_SEL:
			//Still todo
			return NULL;
		default:
			return NULL;
			break;
	}
	//TODO free!
}

struct value *parse_fceexp(struct nary_node *node){
	return NULL;
}

struct value *parse_fceexp_rc(struct nary_node *node){
	return NULL;
}

struct value *parse_functioncall(struct nary_node *node){
	//check if type of 
	return NULL;
}

void parse_block(struct nary_node *node){
	int rc;
	struct id_tab *newtab = tab_init();
	if(sstack_push(id_table_stack, (void*) newtab)){
		con_log("new id table could not be pushed", 
				"parse_block()", LOG_ERROR);
		return;
	}

	parse_stmtlist(node->nodes[0]);

	sstack_pop(id_table_stack, &rc);
	if(rc){
		con_log("new id table could not be popped", 
				"parse_block()", LOG_ERROR);
		return;
	}
}

int get_operation(struct nary_node *node){
	return ((struct node_content*) node->content)->operation;
}

char *get_str(struct nary_node *node){
	return (char *) ((struct value *) ((struct node_content * )
									node->content)->v)->c;
}

struct value *get_value(struct nary_node *node){
	return (struct value *) ((struct node_content *)node->content)->v;
}

struct dyn_arr *get_arr(struct nary_node *node){
	return (struct dyn_arr *) ((struct node_content *)node->content)->v;
}

int *get_num(struct nary_node *node){
	return (int *) ((struct value *) ((struct node_content * )
									node->content)->v)->c;
}

/* prints the whole id_table_stack */
void print_tabl_stack(){
	printf("+Übersicht id tabelle -----------\n");
	struct id_tab *cur;
	int i, j, rc;
	printf("+Stack hat %d Einträge\n", id_table_stack->num);
	for (i=0; i<id_table_stack->num; i++){
		cur = slist_get_at(i, id_table_stack->stack, &rc);
		printf("++Hole Element %d vom Stack. Adresse: %p\n", i, cur);
		printf("++Tabelle hat %d Einträge\n", cur->num);
		printf("++Drucke alle Wert - ID Paare aus\n");
		for(j=0; j<cur->num; j++){
			printf("+++Id: [%s] Wert: [%d]\n", cur->tab[j]->id, 
					*((int*)cur->tab[j]->value->c));
		}
	}
}
