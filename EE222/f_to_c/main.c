#include <stdio.h>
#include <stdlib.h>

#include "conversion.h"

// written by kaelen carling and max weiss

int main() 
{
	// for loop formatting
	printf("	For Loop print out\n");
	printf("Fahrenheit		Celcius\n");
	
	//calls for loop function
	f_to_c_for();
	
	printf("\n");
	
	// while loop label formatting
	printf("	while Loop print out\n");
	printf("Fahrenheit		Celcius\n");
	
	// calls while loop function
	f_to_c_while();
	return 0;
}
