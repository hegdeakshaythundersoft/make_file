CC=gcc#'CC' is taken as gcc pre-def macro of command line
P=-c#to get file just after compilation not executable file macro used is 'P'

arith:	
	#main.o sub.o	
	$(CC)  main.c sum.c sub.c -o arith

akshay: main.c sum.c sub.c
	$(CC) $(P) $^

over:	-o

name:	arith
.c:.o
	$(CC) $(P) $<
clean: 
	rm -f *.o
	rm -f arith	#make clean;
