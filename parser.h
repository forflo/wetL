struct value {
	void *c;
	int type;
	//Maybe additional stuff
};

struct node_content {
	int operation; /* specifies the type of the node */
	struct value *v; /* value of the operation */
};

/*
 ---types---
 */
#define P_TYPE_DOUBLE 301
#define P_TYPE_LIST 302
#define P_TYPE_FFIS 303
#define P_TYPE_STRING 304
#define P_TYPE_NIL 305

/*
 ---operations and node types---
 */

#define P_OP_FORIN 477
#define P_OP_EVEXP 478
#define P_OP_SEL 479
#define P_OP_ENDEXP 480
#define P_OP_STRDEF 481
#define P_OP_LSTCONST 482
#define P_OP_FLST 483
#define P_OP_ECASTLST 484
#define P_OP_LBSTMTLST 485
#define P_OP_SWBLOCK 486
#define P_OP_STMTLST 487
#define P_OP_LBSTMT 488
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

#define P_OP_FCEB 550
#define P_OP_FCRC 551
#define P_OP_FCEXP 552
#define P_OP_HKDEF 553
#define P_OP_HSDEF 554

#define P_OP_NOOP 560

/*
 ---useful defines---
 */

#define MK_CONTENT struct node_content *c = \
    (struct node_content*) malloc(sizeof(struct node_content));

#define MK_LEAF struct nary_node *leaf = \
	new_node((void *) c);

struct nary_node *make_node(int op, struct value *v, int c, ...);
