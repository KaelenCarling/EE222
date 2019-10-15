#include <stdio.h>
#include <stdlib.h>
#include "collatz.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{    
	int index=0;
	int array[MAX_NUMBER+1];
	int array_copy[MAX_NUMBER+1][2];
	
	collatz_upload(array);
	//collatz_copy_array(array, array_copy);
	//collatz_selection_sort(array_copy);
	//collatz_print_array(array_copy);
	
	return EXIT_SUCCESS;
}
