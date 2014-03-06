PAR = parser.y
SCA = scanner.l
CFLAGS = -lfl
YFLAGS = $(CFLAGS) -ly
DS = dyn_arr.c str_dyn.c id_table.c sl_stack.c sl_list.c nary_tree.c
UTIL = logger.c parser_util.c scanner_util.c

all:
	-echo use \$ make interpreter instead

util-test:
	gcc -o str_dyn str_dyn.c -DTEST -lcunit
	gcc -o nary_tree nary_tree.c -DTEST -lcunit
	gcc -o parser_util nary_tree.c parser_util.c -DTESTU -lcunit
	gcc -g -o dyn_arr dyn_arr.c -DTEST -lcunit
	gcc -g -o id_table id_table.c -DTEST -lcunit
	gcc -g -o scanner_util dyn_arr.c scanner_util.c -DTESTX -lcunit
	gcc -g -o sl_list sl_list.c -DTEST -lcunit
	gcc -g -o sl_stack sl_stack.c sl_list.c -DTESTU -lcunit
	./nary_tree
	./str_dyn
	./parser_util
	./dyn_arr
	./id_table
	./scanner_util
	./sl_list
	./sl_stack

scanner: parser
	flex --debug $(SCA)

parser:
	bison --debug -d $(PAR)

interpreter: parser scanner
	gcc -g -o interpreter lex.yy.c parser.tab.c interpreter.c $(DS) $(UTIL) $(YFLAGS)

clean:
	-rm *.o
	-rm scannerDbg
	-rm lex.yy.c
	-rm parser.tab.c
	-rm parser.tab.h
	-rm parserDbg
	-rm nary_tree
	-rm str_dyn

