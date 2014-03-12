#include <stdio.h>
#include "parser.h"
#include "wetparse.h"
#include "iwetparse.h"

static int callback(void *c, void *u){
	if(!(c == NULL))
		printf("Wert des Knotens: %d\n", 
			((struct node_content *) c)->operation);
	return 0;
}

int main(int argc, char **argv){
	FILE *pfile;

	if(parse_args(argc,argv)){
		con_log("The arguments of the interpreter could not be parsed", 
				"main()", LOG_ERROR)
		exit(EXIT_FAILURE);
	}
#ifdef DEBUG
	yydebug = 1;
#endif

	/* decide if we are running in interactive mode */
	if(get_interactive()){
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
		iwetset_in(stdin, scanner);

		interpreter_init();

		/* Simple Read-eval-print loop */
		for(;;){
			printf("%s", get_prompt());
			if(iwetparse(iwetscan)){
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

		if(get_file() != NULL){
			pfile = fopen(get_file(), "r");
			if(pfile == NULL){
				con_log("Error while opening the file",
						"main()", LOG_ERROR);
				perror("main()");
				exit(EXIT_FAILURE);
			}
			wetlex_in(pfile, wetscan);
	 	} else {
			wetset_in(stdin, wetscan);
		}

		interpreter_init();
		if(wetparse(wetscan)){
			con_log("Parser exitcode != 0", "main()", LOG_ERROR);
			exit(EXIT_FAILURE);
		}

		interpreter_cleanup();
		wetlex_destroy(wetscan);
	}
	
	return EXIT_SUCCESS;
}
