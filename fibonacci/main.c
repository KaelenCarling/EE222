#include <stdio.h>
#include <stdlib.h>

#include "fib.h"
/* coded by Kaelen Carling and Max Weiss */

int main(int argc, char *argv[]) {
	int input_num;
	
	//prompts the user for an integer
	printf("Please enter an Integer:");
	scanf("%i", &input_num);
	
	// outputs the fibonacci number of the entered integer
	printf("The fibonacci number of %i is %i", input_num, fib(input_num));
	
	return 0;
}
