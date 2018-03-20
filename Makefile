#Makefile to Sapos
PROG = Sapos
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -ansi -IINCLUDE
OBJS = main.o sapo.o

PROG : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: 
	$(CC) $(CPPFLAGS) -c ./SRC/main.cpp

sapo.o : ./INCLUDE/sapo.hpp
	$(CC) $(CPPFLAGS) -c ./SRC/sapo.cpp 

clean:
	rm -f *.o