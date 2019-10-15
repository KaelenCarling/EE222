#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 1000
/* coded by kaelen carling and max weiss */

int main(int argc, char *argv[]) {
	
	int count = 1;
	int guess = 0;
	int min = 1;
	int max = MAX_NUMBER;
	char inChar;
	
	// loops until min and max are the same which means the number has been guessed
	while((max - min) > 1 )
	{
		// stupid integer math for calculating the guess
		guess = (min/2) + (max/2);
		
		//prompts user for a yes or no and stors it in a variable
		printf("%i. Is your number greater than %i? (y/n)", count, guess);
		scanf("%c", &inChar);
		getchar();
		
		// if yes stores min in guess
		if(inChar == 'y' || inChar == 'Y')
		{
			min = guess;
		}
		
		// if no stores guess in max
		else
		{
			max = guess;
		}
		count++;
	}
	
	// outputs the guess
	printf("Your number is: %i", guess);
	return 0;
}
