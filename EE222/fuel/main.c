//
// Created by Kaelen on 9/3/2019.
//

#include <stdio.h>
#include "fuel_conversion.h"

int main(void)
{
	
    float mpg;
    float lper100k;
    
    //reads in input
    printf("Please enter Miles Per Gallon: ");
    scanf("%f", &mpg);  
    
    // converts it to liters per 100k
	lper100k = mpg_to_lp100k(mpg);
	
	// prints the new amount
	printf("that is %f liters per 100 Kilometers", lper100k);
	
    return 0;
}

