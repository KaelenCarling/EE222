#include <stdio.h>
#include <stdlib.h>
#include "pointer_intro.h"

// coded by kaelen carling and max weiss

int main(int argc, char *argv[]) 
{
	char string1[] = "Pointers rock,";
	char string2[] = "once you get the hang of it!";
	
	printf("length of string1 = %i\n", string_length(string1));

	printf(string_concat(string1, string2));
	
	int a = 3;
	int b = 2;
	int c = 1;
	
	printf("\nbefore the swap = %i, %i, %i", a, b, c);
	
	reorder(&a, &b, &c);
	
	printf("\nafter the swap = %i, %i, %i", a, b, c);
	
	return 0;
}
