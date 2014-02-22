#include "interpreter.h"
#include <stdio.h>
#include "parser.h"
#include "util.h"


void interpret(struct nary_node *root, struct env *e){
	switch(((struct node_content*) root->content)->operation){
		case P_OP_BREAK:
			printf("Kommando break!\n");
			break;
		case P_OP_CONTINUE:
			printf("Kommando Continue!\n");
			break;
		case P_OP_STMTLST:
			interpret(root->nodes[0], e);
		case P_OP_STMT:
			interpret(root->nodes[0], e);
		
	}	
}
