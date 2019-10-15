/*
Written by Kaelen Carling and Max Weiss
*/

#include <stdio.h>
#include <stdlib.h>

#include "interpol.h"

int main(void)
{
	// variables for the coordinates
	float x1, x2, y1, y2, x, y;
	
	// prompts and reads in coordinates
	printf("Enter the coordinates as a spaced list: x1 y1 x2 y2 x\n");
	scanf("%f, %f, %f, %f, %f",&x1, &y1 ,&x2, &y2, &x);
	
	// calculates the y using the interpol function
	y = interpol(x1, x2, y1, y2, x);
	
	// prints the result
	printf("\nYour y is: %f", y);
	
	return 0;
}
