#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dbg.h"
#include "collatz.h"

/* Coded by Kaelen Carling and Max Weiss */

int main(void) 
{
	//initializes the file pointer
	FILE* collatzF;
	collatzF = fopen(OUTPUT_FILE, "w");
	
	//probes function to see if it can be opened
	probe(collatzF, "Error opening file %s", OUTPUT_FILE);
	
	//initializes loop variables
	int index, iter;
	
	//loops through 1 to 100
	for(index=1; index <= MAX_NUMBER; index++)
	{
		//gets the amount of iterations of collatz
		iter = collatz(index);
		
		//prints a number (between 1 and MAX_NUMBER) and how many collatz iterations it had
		fprintf(collatzF,"%i-%i\n", index, iter);
	}
	
	// closes file
	fclose(collatzF);
	return 0;
error:
	printf("Oopsie!");
	return 1;
}
