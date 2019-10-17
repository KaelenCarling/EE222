#include <stdio.h>
#include <stdbool.h>
#include "collatz.h"
#include "dbg.h"
// Program written by kaelen carling and maxwell weiss


bool collatz_upload(int array[])
{
   FILE* collatz_file;
   int number, collatz;    
   
   // open file
   collatz_file = fopen(COLLATZ_FILE, "r");
   probe(collatz_file, "Opening file %s failed", COLLATZ_FILE);    
   
   // read collatz numbers from file
   while(fscanf(collatz_file, "%d - %d", &number, &collatz) == 2)
   {
       array[number-1] = collatz;
   }    // terminate array by setting last element to 0
   
   array[number] = 0;    
   
   // close file
   fclose(collatz_file);    
   return true;
   
   error:
   	return false;
}

void collatz_print_array( int (*array_copy)[2] )
{
   int index = 0;    
   
   while(array_copy[index][0] != 0)
   {
       printf("%d - %d\n", array_copy[index][0], array_copy[index][1]);
       index++;
   }
}

void collatz_copy_array(int array[], int (*array_copy)[2])
{
	int index = 1;
	
	//copies the collatz data from the old array to the new array
	while(array[index] != 0)
	{
		array_copy[index][0]=index+1;
		array_copy[index][1]=array[index];
		index++;
	}
	
	//create first row
	array_copy[0][0]=1;
	array_copy[0][1]=0;

	//create last row 0-0
	array_copy[index][0]=0;
	array_copy[index][1]=0;
}

void collatz_selection_sort(int (*array_copy)[2])
{
	int array_length = 0;
	int all_index = 0;
	int current_min_index;
	int min_index;
	int aux;
	
	//finds array length
	while(array_copy[array_length][0] != 0)
	{
		array_length++;
	}
	
	// loops through whole array to build sorted array array
	for(all_index = 0; all_index < array_length -1; all_index++)
	{
		current_min_index = all_index;
		
		// searches through array for the lowest value in the not sorted section of the array
		for (min_index = all_index + 1; min_index < array_length; min_index++)
		{
			//checks to see if current index is less than the current minimum if it is replaces 
			//the old current min with the new current minimum
			if(array_copy[min_index][1] <= array_copy[current_min_index][1])
			{
				current_min_index = min_index;
			}
		}
		
		// swaps the original indices number / base number
		aux = array_copy[all_index][0];
		array_copy[all_index][0] = array_copy[current_min_index][0];
		array_copy[current_min_index][0] = aux;
		
		// swaps collatz iterations of the orignal indices number / base number
		aux = array_copy[all_index][1];
		array_copy[all_index][1] = array_copy[current_min_index][1];
		array_copy[current_min_index][1] = aux;
	}
}
