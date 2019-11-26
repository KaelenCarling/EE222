#include "matrix.h"
#include <stdlib.h>

/* coded by kaelen carling and max weiss */

float* matrix_multiplication(float* left, float* right, int rows, int shared, int columns)
{

	float *result;
	
	//allocates memory for the results array
	result= malloc(sizeof(float)*(rows*columns));

	int rowInd, colInd, tempProd,sharedInd;
	
	//navigates through the row indices
	for(rowInd=0;rowInd<rows;rowInd++)
	{
		//navigates through the column indices
		for(colInd=0;colInd<columns;colInd++)
		{
			// zeros out the result array
			*(result+(rowInd*columns)+colInd) = 0;
			
			//does the multiplication for the results array
			for(sharedInd=0;sharedInd<shared;sharedInd++)
			{
				*(result+(rowInd*columns)+colInd) += *(left+(rowInd*shared)+sharedInd) * (*(right+(sharedInd*columns)+colInd));
			}
		}
	}
	
	// returns a pointer to the completed results array
	return result;
}
