#include "square_root.h"
#include <math.h>


/*
float square_root(float number)
{
	int high=number;
	int low=0;
	
	if((high/2))^2 >high)
	{
		high= (high/2);
	}
	else if((high/2))^2 <high)
	{
		low=(high/2);
	}
	else//else if((high/2)^2==high)
	{
		return high;
	}
	
	
	if(high-low<=PRECISION )
	{
		return high;
	}

}
*/

float findSquareRoot(float number)
{
	float low = 0, high = number;
	float result = (low / high) / 2;
	float test = result + result;
	
	while(abs(number - test) > PRECISION)
	{
		if(test > number)
		{
			high = result;
		}
		
		else
		{
			low = result;
		}
		
		result = (low + high) / 2;
		test = result * result;
	}
	return result;
}
