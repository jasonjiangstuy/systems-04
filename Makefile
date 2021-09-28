all: main.o euler.o
	gcc -o euler main.o euler.o

main.o: main.c euler.h
	gcc -c main.c

euler.o: euler.h euler.c
	gcc -c euler.c
