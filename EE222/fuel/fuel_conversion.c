//
// Created by Kaelen on 9/3/2019.
//
#include "fuel_conversion.h"

#define mpg_to_lpk 235.215

float mpg_to_lp100k(float mpg)
{
	float returnValue = mpg_to_lpk/mpg;
	
	return returnValue;
}

