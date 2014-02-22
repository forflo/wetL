/* Implements the basic functionality for nary trees */
#include "util.h"
#include <stdlib.h>
#ifdef TEST
#include <string.h>
#include <CUnit/Cunit.h>
#include <CUnit/Basic.h>
#endif

/***************************************************************/
/* takes up 24Byte on a amd64 System */
/* Build with $ gcc -g -o test nary_tree.c -lcunit -DTEST */
int destroy_tree(struct nary_node *tree){
	int i;

	for(i=0; i<tree->nnode; i++){
		destroy_tree(tree->nodes[i]);
	}

	/* aktuellen Knoten zerstören */
	if(tree->content != NULL)
		free(tree->content);
	free(tree);
	return 0;
}

int traverse_preorder(struct nary_node *node, 
						int (*callback)(void *content, void *userparam), 
						void *userparam){
	int i;
	if(-1 == callback(node->content, userparam))
		return -1;
	for(i=0; i<node->nnode; i++){
		traverse_preorder(node->nodes[i], callback, userparam);
	}
	return 0;
}

int traverse_postorder(struct nary_node *node, 
						int (*callback)(void *content, void *userparam), 
						void *userparam){
	int i;
	for(i=0; i<node->nnode; i++){
		traverse_postorder(node->nodes[i], callback, userparam);
	}
	if(-1 == callback(node->content, userparam))
		return -1;
	return 0;
}

/* Initializes a node of an nary tree 
	Param: content = Voidpointer to arbitrary data used as content
	Return: Pointer to a valid nary_node structure or NULL if a failure
		occured */
struct nary_node *new_node(void *content){
	struct nary_node *r = (struct nary_node *) malloc(sizeof(struct 
							nary_node));
	if (r == NULL)
		return NULL;
	r->content = content;
	r->leaf = 1;
	r->nnode = 0;
	r->nodes = NULL;
	return r;
}

/* Deletes a node childs remain intact */
int free_node(struct nary_node *node){
	int i;
	free(node->content);
	free(node->nodes);
	free(node);
	
	return 0;
}

int add_node(struct nary_node *parent, void *content){
	/* allocate memory for new node in the node vector */
	if(parent->nodes == NULL){
		parent->nodes = (struct nary_node **) malloc(sizeof(struct 
													nary_node *));
	} else {
		parent->nodes = (struct nary_node **) realloc(parent->nodes, 
											sizeof(struct nary_node *) * 
											(parent->nnode + 1));
	}
	if(parent->nodes == NULL)
		return -1;

	/* increments number of nodes in parent. and
		appends the newly generated node */
	parent->nodes[parent->nnode++] = new_node(content);

	/* if parent was empty */
	if(parent->leaf)
		parent->leaf = 0;	

	return 0;	
}

int add_child(struct nary_node *parent, struct nary_node *child){
	/* allocate memory for new node in the node vector */
	if(parent->nodes == NULL){
		parent->nodes = (struct nary_node **) malloc(sizeof(struct 
													nary_node *));
	} else {
		parent->nodes = (struct nary_node **) realloc(parent->nodes, 
											sizeof(struct nary_node *) * 
											(parent->nnode + 1));
	}
	if(parent->nodes == NULL)
		return -1;

	parent->nodes[parent->nnode++] = child;

	if(parent->leaf)
		parent->leaf = 0;

	return 0;
}

#ifdef TEST

int init_test(void){return 0;}

void test_init(void){
	char *vier = (char *)  malloc(sizeof(char)*5);
	strcpy(vier, "4711");
	struct nary_node *root = new_node(vier);
	CU_ASSERT(root != NULL);
	CU_ASSERT(!strcmp((char *) root->content, "4711"));
	CU_ASSERT(root->leaf == 1);
	CU_ASSERT(root->nnode == 0);
	CU_ASSERT(root->nodes == NULL);
	free_node(root);
}

int test_callback(void *c, void *u){
	printf("Wert: %s\n", (char *) c);
	return 0;
}

/* This test has to be verified by the user */
void test_add_free(void){
	char *r = (char *) malloc(sizeof(char)*5);	
	char *c1 = (char *) malloc(sizeof(char)*8);	
	char *c2 = (char *) malloc(sizeof(char)*8);	
	char *c3 = (char *) malloc(sizeof(char)*8);	
	strcpy(r, "Root");
	strcpy(c1, "Child 1");
	strcpy(c2, "Child 2");
	strcpy(c3, "Child 3");

	struct nary_node *root = new_node((void *) r);
	struct nary_node *child1 = new_node((void *) c1);
	struct nary_node *child2 = new_node((void *) c2);
	struct nary_node *child3 = new_node((void *) c3);
	int i;
	char *a;
	
	for(i=0; i<10; i++){
		/* no error handling! */
		a = (char *) malloc(sizeof(char) * 6);	
		sprintf(a, "c1: %d", i);
		add_node(child1, (void *) a);	

		a = (char *) malloc(sizeof(char) * 6);	
		sprintf(a, "c2: %d", i);
		add_node(child2, (void *) a);

		a = (char *) malloc(sizeof(char));	
		sprintf(a, "c3: %d", i);
		add_node(child3, (void *) a);
	}

	add_child(root, child1);
	add_child(root, child2);
	add_child(root, child3);
	
	traverse_preorder(root, test_callback, NULL);
	destroy_tree(root);
}

int main(int argc, char **argv){
	CU_pSuite suite = NULL;

	if(CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	suite = CU_add_suite("Test nary", init_test, init_test);
	if(NULL == suite){
		CU_cleanup_registry();
		return CU_get_error();
	}

	if((NULL == CU_add_test(suite, "Initialisierungstest", test_init)) ||
		(NULL == CU_add_test(suite, "Hinzufügen von Knoten", test_add_free))

	){
		CU_cleanup_registry();
		return CU_get_error();
	}

	/* run tests */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}

#endif
