#include "parser.h"
#include <stdlib.h>

#ifdef TESTX
#include <string.h>
#include <CUnit/Cunit.h>
#include <CUnit/Basic.h>
#endif

/* Puts the given integer in a instance of the type struct value
	The type of the object is automatically set
	Param: i = An integer to store
	Return: value * = A valid Pointer to an value structure or
 		NULL on failure. 
 	The following function do the exact same thing but with other input
 	data types... */
struct value *make_valueInt(int i){
	struct value *res = (struct value *) malloc(sizeof(struct value));
	if(res == NULL)
		return NULL;
	int *tmp = (int *) malloc(sizeof(int));
	if(tmp == NULL)
		return NULL;
	*tmp = (int) i;
	res->c = (void *) tmp;
	res->type = P_TYPE_DOUBLE;
	return res;
}

struct value *make_valueFlt(double i){
	struct value *res = (struct value *) malloc(sizeof(struct value));
	if(res == NULL)
		return NULL;
	double *tmp = (double *) malloc(sizeof(int));
	if(tmp == NULL)
		return NULL;
	*tmp = i;
	res->c = (void *) tmp;
	res->type = P_TYPE_DOUBLE;
	return res;
}

struct value *make_valueStr(char *str){
	struct value *res = (struct value *) malloc(sizeof(struct value));
	if(res == NULL || str == NULL)
		return NULL;
	res->c = (void *) str;
	res->type = P_TYPE_STRING;
	return res;
}

struct value *make_valueArr(struct dyn_arr *a){
	struct value *res = (struct value *) malloc(sizeof(struct value));
	if(res == NULL || a == NULL)
		return NULL;
	res->c = (void *) a;
	res->type = P_TYPE_ARR;
	return res;
}

#ifdef TESTX

int dummy(void){
	return 0;
}

void test_valueArr(){
	struct value *res = make_valueArr(arr_init());	
	CU_ASSERT(((struct dyn_arr *) res->c)->num == 0);
	CU_ASSERT(((struct dyn_arr *) res->c)->arr == NULL);
}

int main(int argc, char **argv){
	CU_pSuite suite = NULL;

	if(CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	suite = CU_add_suite("Test nary", dummy, dummy);
	if(NULL == suite){
		CU_cleanup_registry();
		return CU_get_error();
	}

	if((NULL == CU_add_test(suite, "Initialisierungstest", test_valueArr)) 

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
