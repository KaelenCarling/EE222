#include <stdio.h>
#include <stdbool.h>
#include "collatz_fill.h"

/* coded by kaelen carling and max weiss */

//open the collatz file and fill an array with the contents
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

// finds the max collatz iterations in the file
int collatz_max(int array[])
{
	int index=0;
	int max=0;
	
	// loops through the array finding the max and setting max equal to it
	for(index=0;index<MAX_NUMBER;index++)
	{
		if(array[index]>max)
		{
			max= array[index];
		}
	}
	
	return max;
}

// averages the collatz array
float collatz_average(int array[])
{
	int index=0;
	float average=0;
	
	// loops through the array and sums up the total values in the array
	for(index=0; index<MAX_NUMBER;index++)
	{
		average = average+array[index];
	}
	
	// divdes the total sum of the array by the amount of elements in it to find the average
	average=average/MAX_NUMBER;
	return average;
		
}

// finds the amount of indexes that are above the average amount of collatz iterations
int collatz_greater_average(int array[])
{
	int count=0;
	int index=0;
	float average= collatz_average(array);
	
	//loops through array counting how many indexes are above average
	for(index=0;index<MAX_NUMBER;index++)
	{
		if(array[index]>average)
		{
			count++;
		}
	}
	return count;
}


