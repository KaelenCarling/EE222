#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathFunc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float approx, precision, number, delta;
	approx = 1;
	precision = .0001;
	printf("please enter a number: ");
	scanf("%f", &number);
	
	do
	{
		delta = compute_delta(number, approx);
		approx = approx + delta;
	 	
	}while(fabs(delta) > precision);
	
	printf("%f", approx);
	
	return 0;
}
