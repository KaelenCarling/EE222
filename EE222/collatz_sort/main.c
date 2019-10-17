#include <stdio.h>
#include <stdlib.h>
#include "collatz.h"
// Program written by kaelen carling and maxwell weiss


int main() 
{    


	int array[MAX_NUMBER+1];
	int array_copy[MAX_NUMBER+1][2];
	
	collatz_upload(array);
	collatz_copy_array(array, array_copy);
	collatz_selection_sort(array_copy);
	collatz_print_array(array_copy);
	
	return EXIT_SUCCESS;
}
