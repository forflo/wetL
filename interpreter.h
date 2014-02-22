#include "util.h"

struct env {
	int i;
};

void interpret(struct nary_node *root, struct env *e);
