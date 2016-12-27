# Makefile for personal stack adt

# local C variables
CC = gcc
CFLAGS = -Wall -Werror -O

#####
test: test.o stack.o

test.o: test.c stack.c
	$(CC) $(CFLAGS) -c test.c -o test.o

stack.o: stack.c
	$(CC) $(CFLAGS) -c stack.c -o stack.o

clean:
	rm -f *.o core