#include <config.h>
#include <string.h>
#include <stdlib.h>

struct symtab_entry {
	int token;
	char *lexem;
	type *type;
	type *vartype;
	scope *scope;
};

struct scope {
	
};

typedef struct symtab_entry symtab_entry_t; 

symtab_entry *create_entry(int token, char *lexem, type *type, int scope){
	
}

symtab *create_symtab(
