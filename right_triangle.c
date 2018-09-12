#include<stdio.h>
#include<math.h>
#include "mymath.h"
#include "triangle.h"
double hypotenuse(double a, double b)
{
	double square_sum;

	square_sum = add(pow(a, 2), pow(b, 2));

	return sqrt(square_sum);
}


double side(double hypo, double a)
{
	double square_sub;

	square_sub = subtract(pow(hypo, 2),  pow(a, 2));

	return sqrt(square_sub);
}

int is_right_triangle(double a, double b, double hypo)
{
	return (pow(hypo, 2) == pow(a, 2) + pow(b, 2))? 1:0;
}
