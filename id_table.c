/*
 * Author: Florian Mayer
 */

#include "parser.h"
#include <string.h>
#include <stdlib.h>

#ifdef TEST
#include <CUnit/Cunit.h>
#include <CUnit/Basic.h>
#define MAX 30
#endif

/* prefix: tab_ */

/* Initializes an identifier table
	Return: NULL if a error occured. Otherwise a pointer to the
		requested strucutre */
struct id_tab *tab_init(){
	struct id_tab *tab = (struct id_tab *) malloc(sizeof(struct id_tab));
	if(tab == NULL)
		return NULL;
	tab->num = 0;
	tab->tab = NULL;
	return tab;
}

/* Adds a value structure to an specified identifier table 
 	Param: table = Valid pointer to an id table
 		val = Pointer to a value structure
 		id = Pointer to the string which is the id
 	Return: 0 on success or -1 failure */
int tab_add_value(struct id_tab *table, struct value *val, char *id){
	if(table == NULL || val == NULL || id == NULL)
		return -1;

	struct elem *e = (struct elem *) malloc(sizeof(struct elem));
	if(e == NULL)
		return -1;
	e->id = id;
	e->value = val;

	table->tab = (struct elem **) realloc(table->tab, 
						sizeof(struct value *) * ((table->num) + 1));
	if(table->tab == NULL)
		return -1;

	table->tab[table->num++] = e;
	return 0;
}

/* Searches a given id table for a specified value that is
   linked to the given identifier
   		Param: table = A valid pointer to an id table
			id = A valid pointer to a string
		Return: A pointer to the requested value on success or
			NULL on failure */
struct value *tab_get_value(struct id_tab *table, char *id){
	if(table == NULL || id == NULL)
		return NULL;

	int i;
	for(i=0; i<table->num; i++){
		if(!(strcmp(id, table->tab[i]->id))){
			return table->tab[i]->value;
		}
	}
	return NULL;
}

/* Returns the boolean value 1 if the value associated with id could
	be found, else 0 is returned 
 	Param: table = A valid pointer to an id table
 		id = A pointer to the id string
 	Return: -1 on failure, 0 on success */
int tab_exists(struct id_tab *table, char *id){
	if(table == NULL || id == NULL)
		return 0;

	int i;
	for(i=0; i<table->num; i++){
		if(!(strcmp(id, table->tab[i]->id))){
			return -1;
		}
	}
	return 0;
}

/* Changes the pointer to a value strucutre with the specified identifier id
 	using the given value structurepointer val.
 		Param: val = The new value
 			id = The identifier for the element to change 
 			table = A valid pointer to an id_tab structrue
 		Return: -1 if invalid arguments have been given or the element could
 			not be found. 0 on success */
int tab_change_value(struct id_tab *table, char *id, struct value *val){
	int i;
	if(table == NULL || id == NULL || val == NULL)
		return -1;

	for(i=0; i<table->num; i++){
		if(!(strcmp(id, table->tab[i]->id))){
			table->tab[i]->value = val;
			return 0;
		}
	}
	return -1;
}

//TODO: The elementlist can contain some pointer to value structrues 
//which itself point to further values. Freeing just the element pointers
//produces a memory leak. This has to be fixed!
/* Frees the memory occupied by the structure referenced by the given 
 	Pointer.
 	Param: table = A Pointer to a valid id_tab structure
 	Return: 0 on success, -1 on failure. A failure is e.g. if the given 
		Pointer equals NULL. */
int tab_free(struct id_tab *table){
	int i;
	if(table == NULL)
		return -1;
	if(table->tab == NULL && table->num > 0)
		return -1;

	for(i=0; i<table->num; i++){
		free(table->tab[i]);
	}
	free(table->tab);
	free(table);
	return 0;
}

#ifdef TEST

int init_test(void){return 0;}

void test_init(void){
	struct id_tab *test = tab_init();
    CU_ASSERT(test->num == 0);
    CU_ASSERT(test->tab == NULL);
	tab_free(test);
}

void test_usage(void){
	struct id_tab *test = tab_init();
	struct value *temp1;
	char *temp2, *temp3;
	int i;

	for(i=0; i<MAX;i++){
		temp1 = (struct value *) malloc(sizeof(struct value));
		temp2 = (char *) malloc(sizeof(char)*3);
		temp3 = (char *) malloc(sizeof(char)*7);
		sprintf(temp2, "%i", i);
		sprintf(temp3, "ID: %i", i);
		temp1->c = (void *) temp2;
		temp1->type = 0;
		
		CU_ASSERT(tab_add_value(test, temp1, temp3) == 0);
	}

	CU_ASSERT(tab_get_value(test, "ID: 3")->type == 0 &&
				!strcmp(((char*) tab_get_value(test, "ID: 3")->c), "3"));

	CU_ASSERT(tab_get_value(test, "ID: 24")->type == 0 &&
				!strcmp(((char*) tab_get_value(test, "ID: 24")->c), "24"));
	
	struct value *set = (struct value *) malloc(sizeof(struct value));
	set->c = malloc(sizeof(char)*4);
	set->type = 420;
	strcpy((char*)set->c, "420");
	
	CU_ASSERT(tab_change_value(test, "ID: 24", set) == 0);
	
	CU_ASSERT(tab_get_value(test, "ID: 24")->type == 420 &&
				!strcmp(((char*) tab_get_value(test, "ID: 24")->c), "420"));
	
}

int main(int argc, char **argv){
    CU_pSuite suite = NULL;

    if(CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    suite = CU_add_suite("Test id table", init_test, init_test);
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
}

#endif
