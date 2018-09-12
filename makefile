#Sameple Makefile

edit: main.o multiply.o	right_triangle.o sub.o add.o
	gcc -o edit main.o multiply.o right_triangle.o sub.o add.o -lm

multiply.o: multiply.c
	gcc -c multiply.c

sub.o : sub.c 
	gcc -c sub.c	

add.o : add.c
	gcc -c add.c

right_triangle.o: right_triangle.c triangle.h
	gcc -c right_triangle.c

main.o: main.c
	gcc -c main.c

clean: 
	rm -r edit multiply.o sub.o add.o right_triangle.o main.o


