#include <stdio.h>
#include "parser.h"

/* Logs message to stdout */
void con_log(char *msg, char *src, int level){
	printf("[%s] %s \n",  src, msg);
}

