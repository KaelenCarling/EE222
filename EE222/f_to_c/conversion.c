#include "conversion.h"

// written by kaelen carling and max weiss

//function for calculating the conversion using a for loop
void f_to_c_for(void)
{
	//farenheit variable
	float far;
	
	// loop increments by 1.5 from zero to 66 by 1.5
	for(far=0;far<=66;far=far+1.5)
	{
		printf("%.2f			%f\n", far, (far - 32)*(5.0/9.0));
	}
}

//function for calculating the conversion using a while loop
void f_to_c_while(void)
{
	//farenheit variable
	float far=0;
	
	// loop increments by 1.5 from zero to 66 by 1.5
	while(far <= 66)
	{
		// prints formatted converted temperature
		printf("%.2f			%f\n", far, (far - 32)*(5.0/9.0));
		
		//incriments by 1.5
		far=far+1.5;
	}
}
