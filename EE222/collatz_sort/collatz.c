#include <stdio.h>
#include <stdbool.h>
#include "collatz.h"
#include "dbg.h"

bool collatz_fill(int array[])
{
	
	//file declaration
	FILE* collatz_data;

	//open file and set to read mode
	collatz_data = fopen(COLLATZ_FILE, "r");
	
	if(collatz_data == NULL)
	{
		printf("Opening file % failed\n", COLLATZ_FILE);
		return 0;
	}
	
	int number, collatz;
	while(fscanf(collatz_data,"%d-%d",&number,&collatz)==2)
	{
		//put collatz number into array
		array[number-1]=collatz;
		//printf("%i = %i\n",(number), array[number-1]);
	}
	//put in 0 past the last element of array
	array[number]=0;
	
	//close file
	fclose(collatz_data);
	//return true
	return true;
}

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
   int index = 0;    while(array_copy[index][0] != 0)
   {
       printf("%d - %d\n", array_copy[index][0], array_copy[index][1]);
       index++;
   }
}

void collatz_copy_array(int array[], int (*array_copy)[2])
{
	int index = 1;
	
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
	while(array_copy[array_length][0] != 0)
	{
		array_length++;
	}
	
	for(all_index = 0; all_index < array_length -1; all_index++)
	{
		current_min_index = all_index;
		
		for (min_index = all_index+1; min_index < array_length; min_index++)
		{
			if(array_copy[min_index][1] <= array_copy[current_min_index][1])
			{
				current_min_index = min_index;
			}
		}
		
		// swaps 
		aux = array_copy[all_index][0];
		array_copy[all_index][0] = array_copy[current_min_index][0];
		array_copy[current_min_index][0] = aux;
		
		// swaps 
		aux = array_copy[all_index][1];
		array_copy[all_index][1] = array_copy[current_min_index][1];
		array_copy[current_min_index][1] = aux;
	}
}
