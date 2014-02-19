PAR = parser.y
SCA = scanner.l
CFLAGS = $(shell pkg-config --cflags --libs glib-2.0) -lfl
SRC = interpreter.c lex.yy.c parser.tab.c trim.c symtab.c 

all: 
	flex $(SCA)
	bison -d $(PAR)
	gcc -o interpreter $(SRC) $(CFLAGS) -lfl -ly

scanner: parser
	flex $(SCA)

parser:
	bison -d $(PAR)

scanner-debug: scanner
	flex --debug $(SCA)
	gcc -o scannerDbg lex.yy.c $(CFLAGS) 

clean:
	-rm *.o
	-rm scannerDbg
	-rm lex.yy.c
	-rm parser.tab.c
	-rm parser.tab.h
	-rm parserDbg
