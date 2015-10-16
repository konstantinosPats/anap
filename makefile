CC=g++
CFLAGS=-Wall

all: main

main: main.o variable.o

main.o: main.cc

variable.o: variable.cc variable.h

clean:
	rm -f main *.o


