CC=clang
FLAGS=-Wall
EXE=eulertest

.PHONY := clean

all: test.o euler.o
	$(CC) $(FLAGS) -o $(EXE) test.o euler.o

test.o: test.c
	$(CC) $(FLAGS) -c test.c

euler.o: euler.c
	$(CC) $(FLAGS) -c euler.c

clean:
	rm test.o euler.o
