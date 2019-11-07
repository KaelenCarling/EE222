#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "Execution.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float (*ops[])(float, float) = {add, subtract, multiply, divide, NULL};
	
	float x = 8.0;
	float y = 5.0;
	
	printf("%.2f * %.2f = %.2f", x, y, execute(x, y, ops[2]));
	
	
	float results[4];
	
	printf("\nnumber of ops = %i\n", execute_all(x, y, ops, results));
	
	int index;
	for(index = 0; index<4; index++ )
	{
		printf("%f\n",results[index]);
	}
	
	return 0;
}
