#include<stdio.h>
#include "mymath.h"
#include "triangle.h"

int main()
{
	double a=3, b=4, c=6;
	double length;

	double hypo;

	hypo = hypotenuse(a, b);
	printf("the hypotenuse is %f\n", hypo);
	
	sleep(5);

	if(is_right_triangle(a, b, c))
		printf("it is a right triangle!\n");
	else
		printf("it is not a right triangle!\n");
	sleep(5);
	length = add(add(a, b), c);
	printf("the length of triangle is %f\n", length);
	printf("The end!\n");

}
