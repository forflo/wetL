#include <stdio.h>
#include "parser.h"

/* Logs message to stdout */
void con_log(char *msg, char *src, int level){
	if(level>get_loglevel())
		return;
	else
		switch(get_loglevel()){
			case LOG_DEBUG:
				printf("DEBUG: [%s] %s \n",  src, msg);
			case LOG_STRONG:
				printf("STRONG: [%s] %s \n",  src, msg);
			case LOG_MIDDLE:
				printf("MIDDLE: [%s] %s \n",  src, msg);
			case LOG_ERROR:
				printf("ERROR: [%s] %s \n",  src, msg);
			case LOG_NONE:
				break;
		}
}
