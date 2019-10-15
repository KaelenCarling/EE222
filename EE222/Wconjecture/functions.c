#include <stdbool.h>
/* Coded by Kaelen Carling and Max Weiss */

// checks to see if a number is odd
bool is_odd(int number)
{
	bool odd;
	
	// if the number is odd returns true using the modulo operator
	if(number%2!=0)
	{
		odd=true;
	}
	
	// if the number is even returns false
	else
	{
		odd=false;
	}
	return odd;
}

// calculates the collatz iterations of the number
int collatz(int number)
{
	int iter=0;
	
	// loops until the number is 1 
	while(number!=1)
	{
		// if its an odd number it multiplies it by 3 and adds 1
		if(is_odd(number))
		{
			number =number*3 +1;
		}
		
		// if its an even number it divides it by 2
		else
		{
			number= number/2;
		}
		iter++;
	}
	
	// returns the amount of iterations it took to reach 1
	return iter;
}
