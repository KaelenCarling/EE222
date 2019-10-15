#include <stdio.h>
#include <stdlib.h>
#include "collatz_fill.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

	int array[MAX_NUMBER+1];
	
	if(!collatz_fill(array))
	{
		printf("Error reading file");
		return EXIT_FAILURE;	
	}
	
	printf("max = %i\n", collatz_max(array));
	printf("average = %f\n", collatz_average(array));
	printf("amount above average = %i\n", collatz_above_average(array));
	
	
	return 0;
}
