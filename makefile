# This is a Makefile for the mmn12 project
CC = gcc
CFLAGS = -g -Wall -ansi -pedantic
CCLINK = $(CC)
LIBS =
OBJS = main.o adjacency.o
RM = rm -f
# Creating the executable (mmn12)
mmn12: $(OBJS)
	$(CCLINK) -o mmn12 $(OBJS) $(LIBS)

# Creating object files using default rules
main.o: main.c adjacency.h
adjacency.o: adjacency.c adjacency.h
# Cleaning old files before new make
clean:
	$(RM) mmn12 screen_test *.o *.bak *~ "#"* core
