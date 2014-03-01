#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

static int ret_code = 0; //global 
static struct settings *s = NULL;


int parse_args(int argc, char **argv){
	if(s != NULL){
		set_ec(P_RC_ARGAGAIN);
	}
	s = (struct settings *) malloc(sizeof(struct settings));
	s->loglevel = LOG_DEBUG;

	/* argumentparsing*/
	
	return 0;
}

void set_ec(int e){
	ret_code = e;
}

int get_ec(int e){
	return ret_code;
}

int get_loglevel(){
	if(s==NULL)
		return -1;	
	else
		return s->loglevel;
}
