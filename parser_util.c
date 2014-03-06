#include "util.h"
#include "parser.h"
#include <stdlib.h>
#include <stdarg.h>

#ifdef TESTU
#include <CUnit/Basic.h>
#include <CUnit/Cunit.h>
#endif

/* Variadic convenience functionlfor syntax tree generation 
	Param: operation = The use of the node e.g. an if node would have
			P_OP_IF
		v = An valid pointer to an instance of struct value
		childs = The number of additional parameters
		... = The additional parameters have to be of type struct nary_node *
			These Pointers will be added to the generated node as childs in
			exactly the order they have been specified. 

	Return: Valid instance of struct nary_node or NULL if error occured 

	Example:
	-------
	The call make_node(P_OP_NOOP, NULL, a, b, c);
	generates a new node and adds a as his first child, b as
	his second and c as his last child. */
struct nary_node *make_node(int operation, struct value *v, int childs, ...){
	int i;

	va_list args;
	va_start (args, childs);

	struct node_content *c =
		(struct node_content*) malloc(sizeof(struct node_content));

	c->operation = operation;
	c->v = v;

	struct nary_node *leaf = 
		new_node((void *) c);


	/* if childs = 0 this loop does nothing */
	for(i=0; i<childs; i++)
		add_child(leaf, va_arg(args, struct nary_node *));

	va_end(args);
	return leaf;
}

#ifdef TESTU
int dummy(void){
	return 0;
}

int callback(void *c, void *u){
	struct node_content *n = (struct node_content *) c;
	/* because of operator precedence in c n->v->c has to be
		covered by parentheses */
	printf("Knotentyp: %d\n Wert: %f Werttyp: %d\n", n->operation, 
			*((float *) (n->v->c)), n->v->type);
	return 0;
}

void test_make_node(void){
	int i;
	struct value *v1 = (struct value *) malloc(sizeof(struct value));
	struct value *v2 = (struct value *) malloc(sizeof(struct value));
	struct value *v3 = (struct value *) malloc(sizeof(struct value));
	struct value *p = (struct value *) malloc(sizeof(struct value));
	struct value *v[3] = {v1, v2, v3};
	struct nary_node *c[3]; 

	for (i=0; i<3; i++){
		float *temp = (float *) malloc(sizeof(float));
		*temp = 332.30002002133 + (float) i;
		v[i]->c = (void *) temp;
		v[i]->type = P_TYPE_DOUBLE;
		c[i] = make_node(P_OP_VALUE, v[i], 0);
	}


	float *temp = (float *) malloc(sizeof(float));
	*temp = 332.2424242424242 + (float) i;
	p->c = (void *) temp;
	p->type = 4711;

	struct nary_node *parent = make_node(P_OP_NOT, p, 3, c[0], c[1], c[2]);
	traverse_preorder(parent, callback, NULL);
}

int main(int argc, char **argv){
	CU_pSuite pSuite = NULL;

	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	pSuite = CU_add_suite("Test Parser Utils", dummy, dummy); 
	if (NULL == pSuite){
		CU_cleanup_registry();
		return CU_get_error();
	}

	if((NULL == CU_add_test(pSuite, 
			"test make_node", test_make_node ))
	){
		CU_cleanup_registry();
		return CU_get_error();
	}

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}

#endif
