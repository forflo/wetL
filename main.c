#include "parser.h"
#include <stdio.h>
#include "wetparse.h"
#include "iwetparse.h"

int yyerror(const char *str){
	printf("[Parser] %s\n", str);
	return 0;
	return 0;
}

static int callback(void *c, void *u){
	if(!(c == NULL))
		printf("Wert des Knotens: %d\n", 
			((struct node_content *) c)->operation);
	return 0;
}

int main(int argc, char **argv){
#ifdef DEBUG
	yydebug = 1;
#endif
	//traverse_preorder(root, callback, NULL);
	if(get_interactive()){
		interpreter_init();
		int first = 1;
		while(1){
			if(yyparse()){
				printf("Ein Syntaxfehler ist aufgetreten!\n");
				break;
			}
			parse_program_interactive(root, &first);	
		}
	} else {
	
	}
	return EXIT_SUCCESS;
}
