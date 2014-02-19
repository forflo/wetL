#include "tree.h"
#include <stdlib.h> 

node_t *make_node(union value *v, char operation, int leaf){
	node_t *result = (node_t *) malloc(sizeof(node_t) * 1);
	result->v = v;
	result->operation = operation;
	result->nodes = NULL;	
	result->nodec = 0;
	return result;
}

/*appends the node to the given list of nodes in parent*/
void add_node(node_t *parent, node_t *node){
	if(node->nodec == 0){
		node->nodes = (void *) malloc(sizeof(void *)*1);
	} else {
		/* reallocate */
		node->nodec++;
		node->nodes = (void *) realloc(node->nodes, sizeof(void *) * node->nodec);
	}	
	node->nodes[node->nodec-1] = node;
}

void write_log(int debug, int op, char *string){
	switch(op){
		case STD:
			write_log_std(debug, string);
			break;
		case SYSLOG:
		
			break;
		case FIL:
			break;
	}
}

void write_log_std(int debug, char *string){
	switch(debug){
		case ERROR:
			break;
		case STRONG:
			break;
		case MIDDLE:
			break;
		case LOW:
			break;
		case INFO:
			break;
	}
}
