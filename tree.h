struct node {
 	union value *v;
	char operation; /* unnötig */
	int leaf;
	int nodec;
	struct node **nodes;
};

union value {
	long l;
	double d;
	void *misc;
}

node_t *make_node(union value *v, char operation, int leaf);

typedef struct node node_t;

enum debuglevel {ERROR=1, STRONG, MIDDLE, LOW, INFO};
enum operation {STD=1, SYSLOG, FIL, ALL};

void write_log_std(int debug, char *string);

struct log_buffer {
	int itemc;
	char **items;
};

struct logger {
	FILE **file;
	int loglevel;
	int current_operation;
	struct log_buffer *lb;
}


