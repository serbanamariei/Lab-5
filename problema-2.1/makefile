main: main.o vectorReal.o
	clang -Wall main.o vectorReal.o -lm -o main

main.o: main.c vectorReal.h
	clang -c -Wall main.c

vectorReal.o: vectorReal.c vectorReal.h
	clang -c -Wall vectorReal.c

.PHONY: clean

clean:
	rm -f *.o
	rm -f main
