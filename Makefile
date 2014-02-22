PAR = parser.y
SCA = scanner.l
CFLAGS = $(shell pkg-config --cflags --libs glib-2.0) -lfl
YFLAGS = $(CFLAGS) -ly
SRC = interpreter.c lex.yy.c parser.tab.c trim.c symtab.c 

all: 
	flex $(SCA)
	bison -d $(PAR)
	gcc -o interpreter $(SRC) $(CFLAGS) -lfl -ly

util-test:
	gcc -o str_dyn str_dyn.c -DTEST -lcunit
	gcc -o nary_tree nary_tree.c -DTEST -lcunit
	gcc -o parser_util parser_util.c -DTESTU -lcunit
	./nary_tree
	./str_dyn
	./parser_util

scanner: parser
	flex $(SCA)

parser:
	bison -d $(PAR)

scanner-debug: scanner
	flex --debug $(SCA)
	gcc -o scannerDbg str_dyn.c logger.c lex.yy.c $(CFLAGS) 

parser-debug: scanner
	bison -d --debug $(PAR)
	gcc -o parserDbg nary_tree.c parser_util.c str_dyn.c logger.c lex.yy.c parser.tab.c $(YFLAGS) 

interpreter-debug: parser
	gcc -o interpreter nary_tree.c parser_util.c str_dyn.c logger.c lex.yy.c parser.tab.c interpreter.c $(YFLAGS)

clean:
	-rm *.o
	-rm scannerDbg
	-rm lex.yy.c
	-rm parser.tab.c
	-rm parser.tab.h
	-rm parserDbg
	-rm nary_tree
	-rm str_dyn
