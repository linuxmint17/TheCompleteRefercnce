#the compiler:clang++ for C++ program 
CC=clang++
#compiler flags:
#-g adds debugging information to the executabble 
#-Wall turns on most ,but not all, compiler warings
#-pg enable gprof
#-o0  no optimizing
CFLAGS= -G -w -O0 -pg

SRCS=$(wildcard *.cpp )
OBJS=$(PATSUBST %.cpp,%,$(SRCS))
.PHONY: all clean
all:$(OBJS)
%:%.cpp
	$(CC) $(CFLAGS) $@ $<
clean:
	rm -f $(OBJS)
