#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <stdlib.h>
#include "parser.h"

#define OPTSTRING "il:f:p:"

static int ret_code = 0; //global 
static void usage();
static struct settings *s = NULL;

/* Parses the programs arguments only one time. 
 	Subsequent calls will produce the returncode -1.
 	This configuration system is implemented as singleton 
 	as long as you can call it like that in C.
	Param: argc = The number of arguments to parse
		argv = The stringarray to traverse. It will be
			used by the getopt_long function */
int parse_args(int argc, char **argv){
	int c, opt_i;
	if(s != NULL){
		set_ec(P_RC_ARGAGAIN);
		return -1;
	}
	s = (struct settings *) malloc(sizeof(struct settings));
	s->loglevel = LOG_DEBUG;
	s->interactive = 0;
	s->file = NULL;
	static struct option opts[] = {
		{"interactive", no_argument, 0, 'i'},
		{"file", required_argument, 0, 'f'},
		{"prompt", required_argument, 0, 'p'},
		{"log-level", required_argument, 0, 'l'}
	};

	while((c = getopt_long(argc, argv, OPTSTRING, opts, &opt_i) != -1)){
		switch(c){
			case 'i': s->interactive = 1; break;
			case 'l': s->loglevel = atoi(optarg); break;
			case 'f':
				s->file = (char *) malloc(sizeof(char) * 
						(strlen(optarg) + 1));
				strcpy(s->file, optarg);
				break;
			case 'p':
				s->prompt = (char *) malloc(sizeof(char) * 
						(strlen(optarg) + 1));
				strcpy(s->prompt, optarg);
				break;
			default:
				usage();
				exit(EXIT_SUCCESS);
				break;
		}
	}
	
	return 0;
}

void set_ec(int e){
	ret_code = e;
}

int get_ec(int e){
	return ret_code;
}

char *get_file(){
	return s->file;
}

char *get_prompt(){
	return s->prompt;
}

int get_flgInteractive(){
	return s->interactive;	
}

int get_loglevel(){
	if(s==NULL)
		return -1;	
	else
		return s->loglevel;
}

static void usage(){
	printf("Dummy usage: ... \n");
}
