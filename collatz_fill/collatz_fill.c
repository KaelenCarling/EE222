#include <stdio.h>
#include <stdbool.h>
#include "collatz_fill.h"

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

int collatz_max(int array[])
{
	int i=0;
	int max=0;
	for(i=0;i<MAX_NUMBER;i++)
	{
		if(array[i]>max)
		{
			max= array[i];
		}
	}
	return max;
}
float collatz_average(int array[])
{
	int i=0;
	float average=0;
	
	for(i=0; i<MAX_NUMBER;i++)
	{
		average = average+array[i];
	}
	average=average/MAX_NUMBER;
	return average;
		
}
int collatz_above_average(int array[])
{
	int count=0;
	int i=0;
	float average= collatz_average(array);
	for(i=0;i<MAX_NUMBER;i++)
	{
		if(array[i]>average)
		{
			count++;
		}
	}
	return count;
}


