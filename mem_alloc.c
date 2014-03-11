#include "parser.h"
#include <stdlib.h>

#define MAX_INIT 8000 

#ifdef TEST
#include <CUnit/Cunit.h>
#include <Cunit/Basic.h>
#endif

/* Caching purposes*/

/* One dimensional array. Through usage of a single char array speedup
	is expectet because a Array of struct value pointers would require
	more indirections */
static char *mem_val = NULL;
static int mem_cnt = 2;
static int usage_counter;

int mem_init(){
	int i;
	mem_val = (char *) malloc(sizeof(struct value) * MAX_INIT);
	if(mem_val == NULL)
		return -1;
	struct value *temp;

	for(i=0; i<MAX_INIT; i++){
		temp = (struct value *) (mem_val + (i * sizeof(struct value)));
		temp->type = P_TYPE_VALUE;
		temp->c = NULL;
		temp->flag = P_FLAG_NONE;
	}	

	usage_counter = 0;
	return 0;
}

int mem_reset(){
	usage_counter = 0;
	return 0;
}

int mem_free(){
	free(mem_val);
	return 0;
}

/* returns the next free structure pointer. If there are no pointers
 	left, this function allocates MAX_INIT*sizeof(struct value) 
 	byte for the next MAX_INIT structures */
struct value *mem_next(){
	int i, start, end;
	struct value *temp;
	if(usage_counter == MAX_INIT * (mem_cnt - 1)){
		mem_val = (char *) realloc(mem_val, 
						sizeof(struct value) * MAX_INIT * mem_cnt);

		start = MAX_INIT * (mem_cnt - 1);
		end = MAX_INIT * mem_cnt;
		mem_cnt++;
		
		for(i=start; i<end; i++){
			temp = (struct value *) 
						(mem_val + (i * sizeof(struct value)));
			temp->type = P_TYPE_VALUE;
			temp->c = NULL;
			temp->flag = P_FLAG_NONE;
		}
	}
	return (struct value *)	(mem_val + (usage_counter++ * 
									sizeof(struct value)));
}

struct value *mem_nextValInt(){
	struct value *temp = mem_next();
	temp->c = (void *) malloc(sizeof(int));
	temp->type = P_TYPE_INT;
	return temp;
}

struct value *mem_nextValDbl(){
	struct value *temp = mem_next();
	temp->c = (void *) malloc(sizeof(double));
	temp->type = P_TYPE_DOUBLE;
	return temp;
}

struct value *mem_nextValX(int byte){
	struct value *temp = mem_next();
	temp->c = (void *) malloc(byte);
	return temp;
}

#ifdef TEST

int dummy(void){
	return 0;
}

void test_init(void){
	CU_ASSERT(mem_init() == 0);
	CU_ASSERT(mem_next()->type == P_TYPE_VALUE);
	CU_ASSERT(mem_next()->c == NULL);
	CU_ASSERT(mem_next()->flag == P_FLAG_NONE);
	CU_ASSERT(usage_counter == 3);
	CU_ASSERT(mem_reset() == 0);
	CU_ASSERT(usage_counter == 0);

	int i;
	for(i=0; i<20000; i++){
		CU_ASSERT(mem_next()->flag == P_FLAG_NONE);
		CU_ASSERT(mem_next()->type == P_TYPE_VALUE);
	}

	CU_ASSERT(mem_free() == 0);
}

void test_mem(void){
	mem_reset();
	int i;

	while(1){
		for(i=0; i<20000; i++){
			CU_ASSERT(mem_next()->flag == P_FLAG_NONE);
			CU_ASSERT(mem_next()->type == P_TYPE_VALUE);
		}
		mem_reset();
		break;
	}
}

int main(int argc, char **argv){
	CU_pSuite suite = NULL;

	if(CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	suite = CU_add_suite("Test mem_alloc", dummy, dummy);
	if(NULL == suite){
		CU_cleanup_registry();
		return CU_get_error();
	}

	if((NULL == CU_add_test(suite, "Initialisierungstest", test_init))||
		(NULL == CU_add_test(suite, "memtest", test_mem))
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
