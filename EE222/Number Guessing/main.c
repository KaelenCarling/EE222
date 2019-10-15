#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int min = 0;
	int max = 1000;
	int userNum;
	bool correct = false;
	do
	{
		printf("please enter a number between %d and %d", min, max);
		scanf("%d", userNum);
		
	}while(!correct)
	
	return 0;
}
