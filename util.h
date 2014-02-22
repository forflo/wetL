/*
 ---nary tree implementation---
 ---begin---
 */
struct nary_node {
	void *content; //pointer to the content
	struct nary_node **nodes; //array of pointers to child nodes
	int leaf; //1 if leaf 0 if node. If leaf = 0 => nnode > 0
	int nnode; //number of following childnodes 
};

struct nary_node *new_node(void *content);
int add_node(struct nary_node *parent, void *child_content);
int free_node(struct nary_node *node);
int add_child(struct nary_node *parent, struct nary_node *child);
int destroy_tree(struct nary_node *tree);

/* not implemented */
int traverse_inorder(struct nary_node *node, 
					int (*callback)(void *c, void *userparam));
int traverse_preorder(struct nary_node *node, 
					int (*callback)(void *c, void *u), void *userparam);
int traverse_postorder(struct nary_node *node, 
					int (*callback)(void *c, void *u), void *u);
/*
 ---end---
 */

/*
 ---dynamic string implementation---
 ---begin---
 */
#define DYN_INIT_SIZE 100
#define DYN_REALLOC_SIZE 1000

struct dyn_string {
	int chars;
	int space;
	char *data;	
};

typedef struct dyn_string dyn_string_t;

struct dyn_string *ds_get();
struct dyn_string *ds_get_string(char *str);
int ds_append_string(struct dyn_string *string, char *source);
int ds_remove_trailing_char(struct dyn_string *str, char c);
int ds_remove_trailing_whitespaces(struct dyn_string *string);
int ds_append_char(struct dyn_string *string, char source);
int ds_free(struct dyn_string *string);

/*
 ---end---
 */
/*
 ---dynamic string implementation---
 ---begin---
 */

#define LOG_DEBUG 5
#define LOG_STRONG 4
#define LOG_MIDDLE 3
#define LOG_ERROR 2
#define LOG_NONE 1

void con_log(char *m, char *s, int l);
/*
 ---end---
 */
