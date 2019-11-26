#include "stringHalves.h"

/* Coded by max weiss and kaelen carling*/

// swaps the first half with the second half of a string
void swap_half(char* string)
{
	int length = 0;
	
	// finds the length of the string
	while(string[length] != '\0')
	{
		length++;
	}

	//mirrors the first half of the word
	mirror(string, 0, (length/2)-1);
	
	// mirrors the second half of the word
	mirror(string, (length/2), length-1);
	
	// mirrors all of the string to flip into its final form
	mirror(string, 0, length-1);
}

// mirrors a string
void mirror(char *string, int from, int to)
{
	int start = from;
	int end = to;
	char temp;
	
	// loops until it reaches the middle which means that everything has been swapped
	while(start <= end)
	{
		// swaps two characters in the char array
		temp = string[start];
		string[start] = string[end];
		string[end] = temp;
		
		//moves start up one passed the newly swapped character
		start++;
		
		//moves the end down one past the newly swapped character
		end--;
	}
}
