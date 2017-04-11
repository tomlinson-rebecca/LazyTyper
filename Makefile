CC=g++
CXXFLAGS=-std=c++11 -g -Wall
LDFLAGS=-g

all: main Autocorrect.o

main: Autocorrect.o

Autocorrect.o: Autocorrect.h

clean:
	rm -f test *.o *.gch
	

