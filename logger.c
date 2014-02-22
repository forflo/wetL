#include <stdio.h>
#include "util.h"

//TODO: Priority
/* Logs message to stdout */
void con_log(char *msg, char *src, int level){
	printf("[%s] %s \n", msg, src);
}
