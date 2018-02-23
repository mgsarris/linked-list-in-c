all: llist

llist: main.o
	gcc main.o -o llist

main.o: main.c
	gcc -Wall -c main.c

clean:
	rm *.o llist