#Makefile to Sapos

PROG = Sapos
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -ansi -Iinclude
OBJS = main.o sapo.o

($PROG) : ($OBJS)
	$(CC) ($OBJS) -o ($PROG)

sapo.o : INCLUDE/sapo.hpp
	($CC) ($CPPFLAGS) -c ./SRC/sapo.cpp 

main.o:
	($CC) ($CPPFLAGS) -c ./SRC/main.cpp

clean:
	rm -f *.o