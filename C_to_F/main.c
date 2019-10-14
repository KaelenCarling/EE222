#include <stdio.h>
#include <stdlib.h>
#include "C_to_F.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float celsius = 0;
	printf("Please enter temperature in Celsius: ");
	scanf("%f", &celsius);
	printf("you entered: %f", celsius);
	
	printf("\n%f degrees celsius is %f degrees farenheit", celsius, conversion(celsius));
	
	return 0;
}
