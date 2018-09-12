## gcc ##
#Commends sequence
1) compile object file
	gcc -c multiply.c
	gcc -c sub.c
	gcc -c add.c
	gcc -c right_triangle.c
	gcc -c main.c

2)link to be executable program
	gcc -o test main.o sub.o multiply.o add.o right_triangle.o -lm

## "makefile"##
#just use "make", find makefile automatically
#Commends sequence
1) use commend 'make' to complile, link & prodcut the executable files

2) use commend 'make clean' to clean all object, exe files

## "makefile_0x" ##
# show how to use unspecefic makefile name
1) use commend 'make -f makefile_0x' or 'make --file=makefile_0x' 
	to complile, link & prodcut the executable files
2) use commend 'make clean -f makefile_0X' or 'make clean --file=makefile_0x'  
	to clean all object, exe files

## "makefile_01" ##
1) test target and object file how to update with prerequisites change when building the project
2) use phony target '.PHONY'
3) use variable "objects" to replace the prerequisities 


## "makefile_02" ##
1) add '@' to hide shell commends
2) add 'include' to include other makefiles, here build a 'object.mk'
3) test hiden rule "$(CC) -c $(CPPFLAGS) $(CFLAGS)" for C program
4) add debug 'info'

