main: main.o vectorInt.o
	clang -Wall main.o vectorInt.o -lm -o main

main.o: main.c vectorInt.h
	clang -c -Wall main.c

vectorInt.o: vectorInt.c vectorInt.h
	clang -c -Wall vectorInt.c

.PHONY: clean

clean:
	rm -f *.o
	rm -f main
