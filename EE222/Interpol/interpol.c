/*
Written by Kaelen Carling and Max Weiss
*/

#include "interpol.h"


float interpol(float x1,float x2,float y1,float y2,float x)
{
	// calculates slope from given coordinates
	float slope = (y2 - y1)/(x2-x1);
	
	// inerpolates the next y coordinate from the 
	// given coordinates using slope intercept form
	float y = (slope)*x  - (slope)*x2+y2;
	
	// returns the interpolated value
	return y;
}
