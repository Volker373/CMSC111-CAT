#------------------------------------------------------------------------------
# Makefile for CMPS 101 Programming Assignment 2
#
#       make                   makes Lex
#       make ListClient        makes ListClient
#------------------------------------------------------------------------------

Cat : Cat.o
	cc -o Cat Cat.o

clean :
	rm -f Cat Cat.o