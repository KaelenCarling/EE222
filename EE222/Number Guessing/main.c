#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int count = 1;
	int guess = 0;
	int min = 1;
	int max = MAX_NUMBER;
	char inChar;
	
	while(max != min)
	{
		guess = (min + max)/2;
		printf("%i. Is your number greater than %i? (y/n)", count, guess);
		scanf("%c", &inChar);
		getchar();
		//printf("%c", inChar);
		
		if(inChar == 'y' || inChar == 'Y')
		{
			min = guess;
		}
		else
		{
			max = guess;
		}
		count++;
	}
	printf("Your number is: %i", guess);
	return 0;
}
