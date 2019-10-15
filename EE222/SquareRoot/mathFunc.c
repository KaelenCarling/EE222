#include "mathFunc.h"

float compute_delta(float num, float approx)
{
	float returnVal = (num-(approx*approx))/(2 * approx);
	return returnVal;
}
