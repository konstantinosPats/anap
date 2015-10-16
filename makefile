CC=g++
CFLAGS=-Wall

all: main

main: main.o variable.o alg.o

main.o: main.cc

variable.o: variable.cc variable.h

alg.o: alg.cc alg.h

clean:
	rm -f main *.o


