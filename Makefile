SCA = scanner.l iscanner.l
PAR = parser.y iparser.y
CFLAGS = -lfl -lm
YFLAGS = $(CFLAGS) -ly
DS = dyn_arr.c str_dyn.c id_table.c sl_stack.c sl_list.c nary_tree.c
UTIL = logger.c parser_util.c scanner_util.c mem_alloc.c settings.c
GEN = iwetlex.c wetlex.c wetparse.c iwetparse.c
GENH = iwetparse.h wetparse.h

util-test:
	gcc -o str_dyn str_dyn.c -DTEST -lcunit
	gcc -o nary_tree nary_tree.c -DTEST -lcunit
	gcc -o parser_util nary_tree.c parser_util.c -DTESTU -lcunit
	gcc -g -o dyn_arr dyn_arr.c -DTEST -lcunit
	gcc -g -o id_table id_table.c -DTEST -lcunit
	gcc -g -o scanner_util dyn_arr.c scanner_util.c -DTESTX -lcunit
	gcc -g -o sl_list sl_list.c -DTEST -lcunit
	gcc -g -o sl_stack sl_stack.c sl_list.c -DTESTU -lcunit
	gcc -g -o mem_alloc mem_alloc.c -DTEST -lcunit
	./nary_tree
	./str_dyn
	./parser_util
	./dyn_arr
	./id_table
	./scanner_util
	./sl_list
	./sl_stack
	./mem_alloc

gen: $(SCA) $(PAR)
	for i in $(PAR); do \
		echo Generiere Parser aus $$i; \
		bison --debug -d $$i; \
	done
	for i in $(SCA); do \
		echo Generiere scanner aus $$i; \
		flex --debug $$i; \
	done
	

debug: interpreter.c $(PAR) $(SCA) $(DS) $(UTIL)
	for i in $(PAR); do \
		bison --debug -d $$i; \
	done
	for i in $(SCA); do \
		flex --debug $$i; \
	done
	gcc -g -o wetL interpreter.c main.c $(GEN) $(DS) $(UTIL) $(YFLAGS) -DDEBUG

optimized: interpreter.c $(PAR) $(SCA) $(DS) $(UTIL)
	for i in $(PAR); do \
		bison -d $$i; \
	done
	for i in $(SCA); do \
		flex $$i; \
	done
	gcc -Ofast -o wetL interpreter.c main.c $(GEN) $(DS) $(UTIL) $(YFLAGS)

clean:
	-rm *.o
	-rm wetL
	-rm $(GEN)
	-rm $(GENH)
	-rm nary_tree
	-rm str_dyn
	-rm parser_util
	-rm dyn_arr
	-rm id_table
	-rm scanner_util
	-rm sl_list
	-rm sl_stack
	-rm mem_alloc

