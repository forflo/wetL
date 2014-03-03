#include <stdio.h>
#include "parser.tab.h"
#include <stdlib.h>
#include "parser.h"
#include <math.h>

/* neccessary global datastructures like the id_table-Stack */
static struct sstack *id_table_stack;
int *rc;

int get_operation(struct nary_node *node);
char *get_str(struct nary_node *node);
struct value *get_value(struct nary_node *node);
struct dyn_arr *get_arr(struct nary_node *node);
int *get_num(struct nary_node *node);
void assign(struct nary_node *node);

int interpreter_init();

void parse_program(struct nary_node *node);
void parse_stmtlist(struct nary_node *node);
void parse_block(struct nary_node *node);
void parse_stmt(struct nary_node *node);

struct value *parse_explist(struct nary_node *node);
struct value *parse_exp_cast_list(struct nary_node *node);
struct value *parse_parlist(struct nary_node *node);
struct value *parse_idlist(struct nary_node *node);
struct value *parse_arglist(struct nary_node *node);
struct value *parse_varlist(struct nary_node *node);

struct value *parse_expression(struct nary_node *node);
struct value *parse_evalexpression(struct nary_node *node);
struct value *parse_functioncall(struct nary_node *node);
struct value *parse_varexpression(struct nary_node *node);

struct value *parse_fceexp(struct nary_node *node);
struct value *parse_fceexp_rc(struct nary_node *node);

void parse_assignment(struct nary_node *node);
void parse_break(struct nary_node *node);
void parse_continue(struct nary_node *node);
void parse_functiondef(struct nary_node *node);
void parse_if(struct nary_node *node);
void parse_forin(struct nary_node *node);
void parse_for(struct nary_node *node);
void parse_while(struct nary_node *node);
void parse_dowhile(struct nary_node *node);
void parse_switch(struct nary_node *node);
void parse_fceblock(struct nary_node *node); 

int interpreter_init(){
	con_log("initialize interpreter", "interpreter_init()", LOG_DEBUG);
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

	return 0;	
}

void parse_program(struct nary_node *node){
	struct id_tab *newtab = tab_init();
	if(sstack_push(id_table_stack, (void*) newtab)){
		con_log("new id table could not be pushed", 
							"parse_program()", LOG_ERROR);
		return;
	}
	parse_stmtlist(node->nodes[0]);
}

void parse_stmtlist(struct nary_node *node){
	if(get_operation(node) == P_OP_STMTLST){
		parse_stmtlist(node->nodes[0]);
		parse_stmt(node->nodes[1]);
	} else { /* last node of a stmtlist equals the 
				first statement */
		parse_stmt(node->nodes[0]);
	}
}

struct value *parse_explist(struct nary_node *node){
	if(get_operation(node) == P_OP_EXPLST) {
		struct value *temp = parse_explist(node->nodes[0]);
		/* the dynamical array resides in the content of temp */
		arr_add_value((struct dyn_arr *) temp->c, (void *) 
							parse_expression(node->nodes[1]));
		return temp;
	} else { //node is of type P_OP_EXP
		/* Create dynamical list and add the first evaluated expression */
		struct dyn_arr *lst = arr_init();
		arr_add_value(lst, (void *) parse_expression(node->nodes[0]));
		return make_valueArr(lst);
	}
}

struct value *parse_varlist(struct nary_node *node){
	if(get_operation(node) == P_OP_VARLST) {
		struct value *temp = parse_varlist(node->nodes[0]);
		/* the same as in parse_explist */
		arr_add_value((struct dyn_arr*) temp->c, (void *) 
							parse_varexpression(node->nodes[1]));
		return temp;
	} else {
		struct dyn_arr *lst = arr_init();	
		arr_add_value(lst, (void *) parse_varexpression(node->nodes[0]));
		return make_valueArr(lst);
	}
}

void parse_assignment(struct nary_node *node){
	struct value *temp1 = parse_varlist(node->nodes[0]);
	struct value *temp2 = parse_varlist(node->nodes[1]);
	if(temp1->type != P_TYPE_ARR || temp2->type != P_TYPE_ARR) {
		con_log("varlist and explist are invalid", 
					"parse_assignment()", LOG_ERROR);
		return;
	}
	struct dyn_arr *varlist = (struct dyn_arr *) temp1->c;
	struct dyn_arr *explist = (struct dyn_arr *) temp2->c;
	
	if(varlist->num != explist->num) {
		con_log("len of var and explist differ. Operation not executed.", 
					"parse_assignment()", LOG_ERROR);
		return;
	}

	
}

void parse_stmt(struct nary_node *node){
	switch(get_operation(node)){
		case P_OP_ASSIGN:
			parse_assignment(node->nodes[0]);
			break;
		case P_OP_BREAK:

			break;
		case P_OP_CONTINUE:

			break;
		case P_OP_BLOCK:

			break;
		case P_OP_CALL:

			break;
		case P_OP_IF:
			
			break;
		case P_OP_FOR:

			break;
		case P_OP_FORIN:

			break;
		case P_OP_WHILE:

			break;
		case P_OP_DOWH:

			break;
		case P_OP_SWITCH:

			break;
		case P_OP_FCEB:

			break;
		default:
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

			if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
				if(*((int *) ops[0]->c) || *((int *) ops[1]->c))
					return make_valueInt(1);
			} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
				if(*((int *) ops[0]->c) || *((double *) ops[1]->c))
					return make_valueInt(1);
			} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
				if(*((double *) ops[0]->c) || *((int *) ops[1]->c))
					return make_valueInt(1);
			} else {
				if(*((double *) ops[0]->c) || *((double *) ops[1]->c))
					return make_valueInt(1);
			}

			return make_valueInt(0);
			break;
		case P_OP_AND:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_BINOR:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_BINXOR:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_BINAND:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);

			break;
		case P_OP_EQUAL:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_NOTEQUAL:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_GREATERTHAN:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_LESSTHAN:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			break;
		case P_OP_LESS:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);

			break;
		case P_OP_GREATER:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);

			break;
		case P_OP_LEFTSHIFT:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integers only */
			if(ops[0]->type == P_TYPE_INT && ops[0]->type == P_TYPE_INT) {
				*((int *) ops[0]->c) = *((int *) ops[0]->c) << *((int *) ops[1]->c);
			} else {
				//Error!
			}

			return ops[0];
			break;
		case P_OP_RIGHTSHIFT:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integer or floating point numbers */
			if(ops[0]->type == P_TYPE_INT && ops[0]->type == P_TYPE_INT) {
				*((int *) ops[0]->c) = *((int *) ops[0]->c) >> *((int *) ops[1]->c);
			} else {
				//Error!
			}

			return ops[0];
			break;
		case P_OP_PLUS:
			//Get the operands
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int*) ops[0]->c) = *((int*)ops[0]->c) + *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					/* only if ops[0] is of type int and ops[1] is of type double we have
					 	to enlarge the memory */
					ops[0]->c = realloc(ops[0]->c, sizeof(double));
					*((double*) ops[0]->c) = *((int*)ops[0]->c) + *((double *)ops[1]->c);
					ops[0]->type = P_TYPE_DOUBLE;
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) + *((int *)ops[1]->c);
				} else {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) + *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}
			return ops[0];

			break;
		case P_OP_MINUS:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int*) ops[0]->c) = *((int*)ops[0]->c) - *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					/* only if ops[0] is of type int and ops[1] is of type double we have
					 	to enlarge the memory */
					ops[0]->c = realloc(ops[0]->c, sizeof(double));
					*((double*) ops[0]->c) = *((int*)ops[0]->c) - *((double *)ops[1]->c);
					ops[0]->type = P_TYPE_DOUBLE;
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) - *((int *)ops[1]->c);
				} else {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) - *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}
			return ops[0];
			break;
		case P_OP_MUL:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int*) ops[0]->c) = *((int*)ops[0]->c) * *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					/* only if ops[0] is of type int and ops[1] is of type double we have
					 	to enlarge the memory */
					ops[0]->c = realloc(ops[0]->c, sizeof(double));
					*((double*) ops[0]->c) = *((int*)ops[0]->c) * *((double *)ops[1]->c);
					ops[0]->type = P_TYPE_DOUBLE;
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) * *((int *)ops[1]->c);
				} else {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) * *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}
			return ops[0];
			break;
		case P_OP_DIV:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					*((int*) ops[0]->c) = *((int*)ops[0]->c) / *((int *)ops[1]->c);
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					/* only if ops[0] is of type int and ops[1] is of type double we have
					 	to enlarge the memory */
					ops[0]->c = realloc(ops[0]->c, sizeof(double));
					*((double*) ops[0]->c) = *((int*)ops[0]->c) / *((double *)ops[1]->c);
					ops[0]->type = P_TYPE_DOUBLE;
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) / *((int *)ops[1]->c);
				} else {
					*((double*) ops[0]->c) = *((double*)ops[0]->c) / *((double *)ops[1]->c);
				}

			} else {
				//Errorhandling!
			}

			return ops[0];
			break;
		case P_OP_MOD:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integer or floating point numbers */
			if(ops[0]->type == P_TYPE_INT || ops[1]->type == P_TYPE_INT) {
				*((int*) ops[0]->c) = *((int*)ops[0]->c) % *((int *)ops[1]->c);
			} else {
				//Errorhandling!
			}
			return ops[0];
			break;
		case P_OP_POW:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);
			
			/* calculation rules for integer or floating point numbers */
			if((ops[0]->type == P_TYPE_INT || ops[0]->type == P_TYPE_DOUBLE) &&
				(ops[1]->type == P_TYPE_INT || ops[1]->type == P_TYPE_DOUBLE)) {

				//decide how we have to calculate
				if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_INT) {
					ops[0]->c = realloc(ops[0]->c, sizeof(double));
					ops[0]->type = P_TYPE_DOUBLE;
					*((double*) ops[0]->c) = pow(*((int*)ops[0]->c), *((int *)ops[1]->c));
				} else if(ops[0]->type == P_TYPE_INT && ops[1]->type == P_TYPE_DOUBLE) {
					/* only if ops[0] is of type int and ops[1] is of type double we have
					 	to enlarge the memory */
					ops[0]->c = realloc(ops[0]->c, sizeof(double));
					*((double*) ops[0]->c) = pow(*((int*)ops[0]->c), *((double *)ops[1]->c));
					ops[0]->type = P_TYPE_DOUBLE;
				} else if(ops[0]->type == P_TYPE_DOUBLE && ops[1]->type == P_TYPE_INT) {
					*((double*) ops[0]->c) = pow(*((double*)ops[0]->c), *((int *)ops[1]->c));
				} else {
					*((double*) ops[0]->c) = pow(*((double*)ops[0]->c), *((double *)ops[1]->c));
				}

			} else {
				//Errorhandling!
			}
			return ops[0];
			break;
		case P_OP_COMPL:
			ops[0] = parse_expression(node->nodes[0]);
			
			switch(ops[0]->type){
				case P_TYPE_INT:
					*((int*)ops[0]->c) = ~ *((int*)ops[0]->c);
					break;
				default:
					//Error
					break;
			}
			return ops[0];
			break;
		case P_OP_NOT:
			ops[0] = parse_expression(node->nodes[0]);

			//TODO
			return ops[0];
			break;
		case P_OP_LSTCONST:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);

			break;
		case P_OP_STRDEF:
			ops[0] = parse_expression(node->nodes[0]);
			ops[1] = parse_expression(node->nodes[1]);

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
		case P_OP_EVEXP:
			return parse_evalexpression(node->nodes[0]);
			break;
		default:		
			return NULL;
			//Error
			break;
	}
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

struct value *parse_varexpression(struct nary_node *node){
	switch(get_operation(node)){
		case ID:
			return get_value(node);
		case P_OP_SEL:
			//Still todo
			return NULL;
		default:
			return NULL;
			break;
	}
}

struct value *parse_functioncall(struct nary_node *node){
	struct value *ops[2];
	ops[0] = parse_evalexpression(node->nodes[0]);
	ops[1] = parse_arglist(node->nodes[1]);
	//check if type of 
	return NULL;
}

void parse_block(struct nary_node *node){
	parse_stmtlist(node->nodes[0]);
}

void assign(struct nary_node *node);

int get_operation(struct nary_node *node){
	return ((struct node_content*) node->content)->operation;
}

char *get_str(struct nary_node *node){
	return (char *) ((struct value *) ((struct node_content * )node->content)->v)->c;
}

struct value *get_value(struct nary_node *node){
	return (struct value *) ((struct node_content *)node->content)->v;
}

struct dyn_arr *get_arr(struct nary_node *node){
	return (struct dyn_arr *) ((struct node_content *)node->content)->v;
}

int *get_num(struct nary_node *node){
	return (int *) ((struct value *) ((struct node_content * )node->content)->v)->c;
}

