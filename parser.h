/*
 * Author: Florian Mayer
 ---begin parser type declarations---
 */
struct value {
	void *c;
	int type;
	int flag;
	//Maybe additional stuff
};

#define P_FLAG_RO 120
#define P_FLAG_NONE 121

struct node_content {
	int operation; /* specifies the type of the node */
	struct value *v; /* value of the operation */
};

/*
 ---types---
 */
#define P_TYPE_ID 299
#define P_TYPE_INT 300
#define P_TYPE_DOUBLE 301
#define P_TYPE_LIST 302
#define P_TYPE_FFIS 303
#define P_TYPE_STRING 304
#define P_TYPE_NIL 305
/* ARR is an internal type */
#define P_TYPE_ARR 306
#define P_TYPE_VALUE 307

/*
 ---Possible errorcodes---
 */
#define P_RC_ARGAGAIN 100

/*
 ---operations and node types---
 */
#define P_OP_FFILONGDOUBLE 461
#define P_OP_FFIVOIDPTR 462
#define P_OP_FFIFLOAT 463
#define P_OP_FFIDOUBLE 464
#define P_OP_FFILONGLONG 465
#define P_OP_FFILONG 466
#define P_OP_FFIINT 467
#define P_OP_FFISHORT 468
#define P_OP_FFICHAR 469
#define P_OP_ELIFLST 470
#define P_OP_ELIFBLK 471
#define P_OP_ELIF 472
#define P_OP_ELSE 473
#define P_OP_PARLSTHS 474
#define P_OP_PARLSTHK 475
#define P_OP_VARLST 476
#define P_OP_FORIN 477
#define P_OP_EVEXP 478
#define P_OP_SEL 479
#define P_OP_VAREXP 480
#define P_OP_STRDEF 481
#define P_OP_LSTCONST 482
#define P_OP_FLST 483
#define P_OP_ECASTLST 484
#define P_OP_CASELST 485
#define P_OP_SWBLOCK 486
#define P_OP_STMTLST 487
#define P_OP_CASESTMT 488
#define P_OP_EXPLST 489
#define P_OP_IDLST 491
#define P_OP_ARGLST 492
#define P_OP_PARLST 493
#define P_OP_SWITCH 494
#define P_OP_DOWH 495
#define P_OP_WHILE 496
#define P_OP_ASSIGN 497
#define P_OP_FDEF 498
#define P_OP_CALL 499
#define P_OP_BLOCK 500
#define P_OP_FFICAST 501
#define P_OP_IF 502
#define P_OP_FOR 503
#define P_OP_BREAK 504
#define P_OP_CONTINUE 505
#define P_OP_STMTLIST 506
#define P_OP_STMT 507
#define P_OP_VALUE 508
#define P_OP_EXP 509
#define P_OP_ASSOP 510
#define P_OP_ASPLUS 511
#define P_OP_ASMINUS 512
#define P_OP_ASMUL 513
#define P_OP_ASDIV 514
#define P_OP_ASMOD 515
#define P_OP_ASPOW 516
#define P_OP_ASBINOR 517
#define P_OP_ASBINAND 518
#define P_OP_ASBINXOR 519
#define P_OP_ASRIGHTSHIFT 520
#define P_OP_ASLEFTSHIFT 521
#define P_OP_OR 522
#define P_OP_AND 523
#define P_OP_BINOR 524
#define P_OP_BINXOR 525
#define P_OP_BINAND 526
#define P_OP_EQUAL 527
#define P_OP_NOTEQUAL 528
#define P_OP_GREATERTHAN 529
#define P_OP_LESSTHAN 530
#define P_OP_GREATER 531
#define P_OP_LESS 532
#define P_OP_LEFTSHIFT 533
#define P_OP_RIGHTSHIFT 534
#define P_OP_PLUS 535
#define P_OP_MINUS 536
#define P_OP_MUL 537
#define P_OP_DIV 538
#define P_OP_MOD 539
#define P_OP_POW 540
#define P_OP_COMPL 541
#define P_OP_NOT 542
#define P_OP_UMINUS 543

#define P_OP_FCEB 550
#define P_OP_FCRC 551
#define P_OP_FCEXP 552
#define P_OP_HKDEF 553
#define P_OP_HSDEF 554

#define P_OP_NOOP 560
#define P_OP_PRINT 561
#define P_OP_INC 562
#define P_OP_DEC 563

/*
 ---useful defines---
 */
#define MK_CONTENT struct node_content *c = \
    (struct node_content*) malloc(sizeof(struct node_content));

#define MK_LEAF struct nary_node *leaf = \
	new_node((void *) c);

struct nary_node *make_node(int op, struct value *v, int c, ...);

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

/* traverse_inorder not implemented */
int traverse_inorder(struct nary_node *node, 
					int (*callback)(void *c, void *userparam));
int traverse_preorder(struct nary_node *node, 
					int (*callback)(void *c, void *u), void *userparam);
int traverse_postorder(struct nary_node *node, 
					int (*callback)(void *c, void *u), void *u);

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
int ds_append_string(struct dyn_string *string, const char *source);
int ds_remove_trailing_char(struct dyn_string *str, char c);
int ds_remove_trailing_whitespaces(struct dyn_string *string);
int ds_append_char(struct dyn_string *string, const char source);
int ds_free(struct dyn_string *string);

/*
 ---dynamic single linked list implementation---
 ---begin---
 */
struct slist {
	int len;
	struct snode *start;
};

struct snode {
	void *content;
	struct snode *next;
};

/* build an single linked list */
struct slist *slist_init();

/* add something to the end of the list */
int slist_add(struct slist *list, void *content);

/* get something from a index */
void *slist_get_at(int index, struct slist *list, int *fehler);

/* inserts an item before the index */
int slist_add_at(struct slist *list, int index, void *content);

/* prepend an item */
int slist_prepend(struct slist *list, void *content);

/* removes an item at the specified Index */
int slist_rm_at(struct slist *list, int index);

/* removes the last item */
int slist_rm_last(struct slist *list);

/* removes the node with the specified content */
int slist_rm_content(struct slist *list, void *content);

/* frees the entire datastructure including all nodes content */
int slist_free(struct slist *list);

/*
 ---stack implementation---
 ---begin---
 */
struct sstack {
	int num;
	struct slist *stack;
};

/* builds an instance of a stack */
struct sstack *sstack_init();

void *sstack_head(struct sstack *stack, int *rc);

void *sstack_pop(struct sstack *stack, int *rc);

int sstack_push(struct sstack *stack, void *content);

int sstack_size(struct sstack *stack);


/*
 ---loggin implementation---
 ---begin---
 */
#define LOG_DEBUG 5
#define LOG_STRONG 4
#define LOG_MIDDLE 3
#define LOG_ERROR 2
#define LOG_NONE 1

void con_log(char *m, char *s, int l);

/*
 ---begin interpreter declarations---
 */
int get_operation(struct nary_node *node);
char *get_str(struct nary_node *node);
struct value *get_value(struct nary_node *node);
struct dyn_arr *get_arr(struct nary_node *node);
int *get_num(struct nary_node *node);
void assign(struct nary_node *node);

int interpreter_init();
int interpreter_cleanup();

void parse_program(struct nary_node *node);
void parse_program_interactive(struct nary_node *node, int *first);
void parse_stmtlist(struct nary_node *node);
void parse_block(struct nary_node *node);
void parse_switchblock(struct nary_node *node, struct value *val);
void parse_case_stmtlist(struct nary_node *node, struct value *val, int *jumpflag);
void parse_case_statement(struct nary_node *node, struct value *val, int *jumpflag);
void parse_stmt(struct nary_node *node);
void parse_elif_block_list(struct nary_node *node, int *jumpflag);
void parse_elif_block(struct nary_node *node, int *jumpflag);

struct dyn_arr *parse_explist(struct nary_node *node);
struct dyn_arr *parse_exp_cast_list(struct nary_node *node);
struct dyn_arr *parse_parlist(struct nary_node *node);
struct dyn_arr *parse_idlist(struct nary_node *node);
struct dyn_arr *parse_arglist(struct nary_node *node);
struct dyn_arr *parse_varlist(struct nary_node *node);

struct value *parse_expression(struct nary_node *node);
struct value *parse_evalexpression(struct nary_node *node);
struct value *parse_functioncall(struct nary_node *node);
struct value *parse_varexpression(struct nary_node *node);

struct value *parse_fceexp(struct nary_node *node);
struct value *parse_fceexp_rc(struct nary_node *node);

struct value *parse_lstconst(struct nary_node *node);
struct value *parse_fficonst(struct nary_node *node);

void parse_assignment(struct nary_node *node);
void parse_break(struct nary_node *node);
void parse_print(struct nary_node *node);
void parse_continue(struct nary_node *node);
void parse_functiondef(struct nary_node *node);
void parse_switch_case(struct nary_node *node);
void parse_if(struct nary_node *node);
void parse_else(struct nary_node *node);
void parse_elif(struct nary_node *node);
void parse_forin(struct nary_node *node);
void parse_for(struct nary_node *node);
void parse_while(struct nary_node *node);
void parse_dowhile(struct nary_node *node);
void parse_switch(struct nary_node *node);
void parse_fceblock(struct nary_node *node); 
void parse_inc(struct nary_node *node);
void parse_dec(struct nary_node *node);

/*
 ---begin id_table and dyn_arr declarations
 */
struct id_tab {
	int num;
	struct elem **tab;
};

struct elem {
	char *id;
	struct value *value;
};

struct id_tab *tab_init();
int tab_add_value(struct id_tab *table, struct value *val, char *id);
struct value *tab_get_value(struct id_tab *table, char *id);
int tab_change_value(struct id_tab *table, char *id, struct value *val);
int tab_free(struct id_tab *table);
int tab_exists(struct id_tab *table, char *id);

struct dyn_arr {
	int num;
	void **arr;
};

struct dyn_arr *arr_init();
int arr_add_value(struct dyn_arr *arr, void *val);
int arr_free(struct dyn_arr *arr);

/*
 ---begin settings.c declarations---
 */
struct settings {
	int loglevel;
	int interactive;
	char *file;
	char *prompt;
};

void print_args();
int parse_args();

int get_ec();
void set_ec(int e);
int get_loglevel();
char *get_file();
char *get_prompt();
int get_flgInteractive();

/*
 ---begin scanner util
 */
struct value *make_valueInt(int i);
struct value *make_valueId(const char *str);
struct value *make_valueDbl(double d);
struct value *make_valueStr(const char *str);
struct value *make_valueArr(struct dyn_arr *a);
struct value *make_valueCpy(struct value *org);
struct value *make_valueVal();

/*
 --- mem_alloc.c
 */
int mem_init();
int mem_reset();
int mem_free();
struct value *mem_next();
struct value *mem_nextValInt();
struct value *mem_nextValDbl();
struct value *mem_nextValX(int byte);

