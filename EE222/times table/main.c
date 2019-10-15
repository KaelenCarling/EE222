#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tt.h"
/* Written by Max weiss and Kaelen Carling */

/*
Input begins with a loop that will keep looping until correct inputs are entered for both x and y. 
The firstTime boolean checks to see if this is the first iteration through the loop. If it is then it 
outputs a unique message telling you to enter unique factors and then sets the firstTime boolean to 
false so that the message will not be displayed again. The loop will then store the entered values into 
x and y. If x and y are within the dimensions of the table then it will exit the loop and print the found
product if not then the loop will loop continually until you enter correct factors, diplaying that 
the factors are larger than the dimensions and you should try entering correct dimensions again. 
*/

int main(int argc, char *argv[]) {
	int x, y;
	bool firstTime = true;
	
	write_tt();
	
	read_tt();
	
	// loop keeps looping until a valid set of factors are entered
	do
	{
		// if statement to see if this is the first time throught the loop
		if(firstTime)
		{
			// if it is the first time then it displays a unique message
			printf("\nEnter two factors, e.g. 10 16: ");
			firstTime = false;
		}
		// if this is not the first time through the loop then it will redisplay this message
		else
		{
			printf("\nBothfactors cannot be greater than %d, try again: ", DIMENSION);
		}
		
		//records the factors in x and y
		scanf("%d %d", &x, &y);
	}while(x>DIMENSION || y>DIMENSION);
	
	// prints the found product of the two factors
	printf("%d * %d = %d\n", x, y, result_tt(x, y));
	
	return EXIT_SUCCESS;
}
