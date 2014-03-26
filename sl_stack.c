/*
 * Author: Florian Mayer
 */
#include "parser.h"
#include <stdlib.h>
#include <string.h>

#ifdef TESTU
#include <CUnit/Cunit.h>
#include <CUnit/Basic.h>
#endif

/* Initializes an instance of the struct sstack type 
 	Param: void
 	Return: A valid Pointer or NULL on failure */
struct sstack *sstack_init(){
	struct sstack *res = (struct sstack *) malloc(sizeof(struct sstack));
	if(res == NULL)
		return NULL;
	res->num = 0;
	res->stack = slist_init();
	if(res->stack == NULL)
		return NULL;

	return res;
}

/* Returns the top element of the stack
	Param: stack = A valid pointer to a sstack structure
	Return: An arbitrary pointer and 0 in rc or -1 in rc on failure. 
	Note that you have to allocate mamory for rc on your own. Calling
	the function without that will very likely cause undefined behaviour.
	*/	
void *sstack_head(struct sstack *stack, int *rc){
	if(stack == NULL){
		*rc = -1;
		return NULL;
	}

	void *result = slist_get_at(0, stack->stack, rc);
	return result;
}

/* Returns the top element of the stack and removes it's node
	from it. It also decrements the number of elements on the stack
	Param: stack = A valid pointer to a sstack structure
		rc = A valid pointer to an int field. This acts as returncode
			because the returned pointer could be validly NULL
	Return: -1 in rc and NULL on failure or 0 in rc and an 
		arbitrary pointer */
void *sstack_pop(struct sstack *stack, int *rc){
	if(stack == NULL) {
		*rc = -1;
		return NULL;
	}
	if(stack->num <= 0){
		*rc = -1;
		return NULL;
	}

	void *result = slist_get_at(0, stack->stack, rc);
	if(slist_rm_at(stack->stack, 0)){
		*rc = -1;
		return NULL;
	}
	*rc = 0;
	stack->num--;
	return result;
}

/* Pushes the given content on top of the stack 
	Param: stack = A valid pointer to a sstack structure
		content = An arbitrary pointer
 	Return: -1 on failure or 0 on success */
int sstack_push(struct sstack *stack, void *content){
	if(stack == NULL)
		return -1;

	if(slist_prepend(stack->stack, content)) {
		return -1;
	} else {
		stack->num++;
		return 0;
	}
}

/* Returns the current size of the given stack
	Param: stack = A valid pointer to a sstack structure
 	Return: The current size or -1 on failure */
int sstack_size(struct sstack *stack){
	if(stack == NULL)
		return -1;
	else
		return stack->num;
}

/* Frees a stack. The list contained by it is freed by the corres-
 	ponding function in sl_list.c 
	Param: stack = A valid pointer to a sstack structure
	Return: -1 on failure or 0 on success */
int sstack_free(struct sstack *stack){
	if(stack == NULL || stack->stack == NULL) {
		return -1;
	} else {
		if(slist_free(stack->stack))
			return -1;
		free(stack);
		return 0;
	}
}

#ifdef TESTU

int init_test(void){return 0;}

void test_init(void){
	struct sstack *stack = sstack_init();
	CU_ASSERT(stack != NULL);
	CU_ASSERT(stack->stack != NULL);
	CU_ASSERT(stack->num == 0);
	CU_ASSERT(sstack_free(stack) == 0);
}

/* Test for pushing, poping, heading and initializing */
void test_usage(void){
	int *rc = (int *) malloc(sizeof(int));
	struct sstack *stack = sstack_init();
	char **strlist = (char **) malloc(sizeof(char *) * 10);
	int i;

	for(i=0; i<10; i++) {
		strlist[i] = malloc(sizeof(char) * 15);
		sprintf(strlist[i], "Ein Inhalt %i", i);
		CU_ASSERT(sstack_push(stack, (void *) strlist[i]) == 0);
	}

	CU_ASSERT(sstack_size(stack) == 10);

	//some sstack_pop tests
	while(sstack_size(stack)!=2)
		printf("Content: %s\n", (char *) sstack_pop(stack, rc)) ;

	//sstack_head() test
	CU_ASSERT(!strcmp((char*) sstack_head(stack, rc), "Ein Inhalt 1"));
	CU_ASSERT(!strcmp((char*) sstack_pop(stack, rc), "Ein Inhalt 1"));
	CU_ASSERT(!strcmp((char*) sstack_pop(stack, rc), "Ein Inhalt 0"));
	CU_ASSERT(sstack_size(stack) == 0);
	CU_ASSERT(stack->stack->len == 0);

	printf("Finished!\n");
}



int main(int argc, char **argv){
	CU_pSuite suite = NULL;

	if(CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	suite = CU_add_suite("Test singly list stack impl", init_test, init_test);
	if(NULL == suite){
		CU_cleanup_registry();
		return CU_get_error();
	}

	if((NULL == CU_add_test(suite, "Initialisierungstest", test_init)) ||
		(NULL == CU_add_test(suite, "Hinzufügen von Elementen", test_usage))

	){
		CU_cleanup_registry();
		return CU_get_error();
	}

	/* run tests */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
	test_usage();
}

#endif
