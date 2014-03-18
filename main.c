#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "parser.h"

extern int wetdebug;
extern int iwetdebug;

extern void wetset_in(FILE *f, void *scan);
extern void iwetset_in(FILE *f, void *scan);
extern int iwetlex_init(void *wet);
extern int wetlex_init(void *wet);
extern int iwetlex_destroy(void *wet);
extern int wetlex_destroy(void *wet);
extern int iwetparse(struct nary_node **r, void *scan);
extern int wetparse(struct nary_node **r, void *scan);

static int callback(void *c, void *u){
	if(!(c == NULL))
		printf("Wert des Knotens: %d\n", 
			((struct node_content *) c)->operation);
	return 0;
}

int main(int argc, char **argv){
	FILE *pfile;
	struct nary_node *root;

	if(parse_args(argc,argv)){
		con_log("The arguments of the interpreter could not be parsed", 
				"main()", LOG_ERROR);
		exit(EXIT_FAILURE);
	}
#ifdef DEBUG
	wetdebug = 1;
	iwetdebug = 1;
#endif

	/* decide if we are running in interactive mode */
	if(get_flgInteractive()){
		con_log("Starting interactive interpreter",
				"main()", LOG_ERROR);
		int first = 1;
		/* initialize the interactive scanner. See
			http://flex.sourceforge.net/manual/Reentrant-Detail.html#Reentrant-Detail
			for more specific details about instanciating a 
			reentrant scanner */
		void *iwetscan;
		if(iwetlex_init(&iwetscan)){
			con_log("Could not initialize the scanner",
					"main()", LOG_ERROR);
			exit(EXIT_FAILURE);
		}
		iwetset_in(stdin, iwetscan);

		interpreter_init();

		/* Simple Read-eval-print loop */
		while(!feof(stdin)){
			printf("%s", get_prompt());
			if(iwetparse(&root, iwetscan)){
				printf("Ein Syntaxfehler ist aufgetreten!\n");
				continue;
			}
			parse_program_interactive(root, &first);	
		}
		interpreter_cleanup();
		iwetlex_destroy(iwetscan);
	} else {
		void *wetscan;
		if(wetlex_init(&wetscan)){
			con_log("Could not initialize the scanner",
					"main()", LOG_ERROR);
			exit(EXIT_FAILURE);
		}

		/* If a filename was given. Open the file and
			take that as input for the flex lexer */
		if(get_file() != NULL){
			pfile = fopen(get_file(), "r");
			if(pfile == NULL){
				con_log("Error while opening the file",
						"main()", LOG_ERROR);
				con_log(strerror(errno), "main()", LOG_ERROR);
				exit(EXIT_FAILURE);
			}
			wetset_in(pfile, wetscan);
	 	} else {
			wetset_in(stdin, wetscan);
		}

		interpreter_init();
		if(wetparse(&root, wetscan)){
			con_log("Parser exitcode != 0", "main()", LOG_ERROR);
			exit(EXIT_FAILURE);
		}

#ifdef DEBUG
		printf("Pointer zum Root: %p\n", root);
		traverse_preorder(root, callback, NULL);
#endif
		parse_program(root);
		interpreter_cleanup();
		wetlex_destroy(wetscan);
	}
	
	return EXIT_SUCCESS;
}
