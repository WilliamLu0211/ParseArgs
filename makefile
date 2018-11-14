all: clas.o
	gcc clas.o

clas.o: clas.c
	gcc -c clas.c

run:
	./a.out

clean:
	rm *.o
