#include <stdio.h>
#include <stdlib.h>
#include "collatz_fill.h"
/* coded by kaelen carling and max weiss */

int main(int argc, char *argv[]) 
{

	int array[MAX_NUMBER+1];
	
	if(!collatz_fill(array))
	{
		printf("Error reading file");
		return EXIT_FAILURE;	
	}
	
	//prints collatz maximum
	printf("max = %i\n", collatz_max(array));
	
	// prints collatz average
	printf("average = %f\n", collatz_average(array));
	
	// prints the amount of collatz that are above average
	printf("amount above average = %i\n", collatz_greater_average(array));
	
	
	return 0;
}
