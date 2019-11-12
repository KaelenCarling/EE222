#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pointer_intro.h"

// coded by kaelen carling and max weiss

int string_length(char* string_ptr)
{
	int length = 0;
	
	// iterates through the string by increasing the pointer by 1
	while(*string_ptr != '\0')
	{
		//adds 1 to the length for each character it iterates through
		length++;
		string_ptr++;
	}
	
	//returns the length of the string
	return length;
}

char* string_concat(char* first_string, char* second_string)
{
	char* start_point = first_string;
	
	//size_t total_size = (string_length(first_string) + string_length(second_string) + 1);
	//start_point = malloc(total_size);
	
	//iterates to the end of the first string where the second string will be concatenated
	while(*first_string)
	{
		first_string++;
	}
	
	//concatenates the end of the first string to the beginning of the second string
	while(*second_string)
	{
		*first_string = *second_string;
		first_string++;
		second_string++;
	}
	
	//sets the end of the string
	*first_string = '\0';
	
	//returns the starting position of the concatenated string
	return start_point;
}

void reorder(int* a, int* b, int* c)
{
	int *temp;
	
	// if a is larger than b it swaps the values
	if(a > b)
	{
	temp = *b;
	*b = *a;
	*a = temp;
	}
	
	// if a is larger than c it swaps the values
	if(a > c)
	{
	temp = *c;
	*c = *a;
	*a = temp;
	}
	
	// if b is larger than c it swaps the values
	if (b > c)
	{
	temp = *c;
	*c = *b;
	*b = temp;	
	}
}
