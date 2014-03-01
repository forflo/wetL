PAR = parser.y
SCA = scanner.l
CFLAGS = $(shell pkg-config --cflags --libs glib-2.0) -lfl
YFLAGS = $(CFLAGS) -ly
SRC = interpreter.c lex.yy.c parser.tab.c trim.c symtab.c 

all: 
	flex $(SCA)
	bison -d $(PAR)
	gcc -o interpreter $(SRC) $(CFLAGS) -lfl -ly

get-lines:
	shell echo $(($(cat *.c | wc -l) - $(cat parser.tab.c lex.yy.c | wc -l)))

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

parser-debug: scanner parser
	gcc -o parserDbg nary_tree.c parser_util.c str_dyn.c logger.c lex.yy.c parser.tab.c $(YFLAGS) 

interpreter: parser scanner
	gcc -o interpreter dyn_arr.c scanner_util.c nary_tree.c parser_util.c str_dyn.c logger.c lex.yy.c parser.tab.c interpreter.c $(YFLAGS)

clean:
	-rm *.o
	-rm scannerDbg
	-rm lex.yy.c
	-rm parser.tab.c
	-rm parser.tab.h
	-rm parserDbg
	-rm nary_tree
	-rm str_dyn

