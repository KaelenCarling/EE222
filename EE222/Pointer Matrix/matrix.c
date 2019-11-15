#include "matrix.h"

float* matrix_multiplication(float* left, float* right, int rows, int shared, int columns)
{
	/*
	float result[rows][columns]={0};
	
	malloc(sizeof(float)*(rows*columns));

	int rowInd, colInd, tempProd,sharedInd;
//nested loops that perform the matrix multiplication
	for(rowInd = 0; rowInd < rows; rowInd++)
	{
		//loops through the columns of right matrix
		for(colInd=0; colInd<columns;colInd++)
		{
		
			
			// loops for columns of second matrices
			for(sharedInd = 0; sharedInd < shared; sharedInd++)
			{
				result[rowInd][colInd]+= left[rowInd][sharedInd]*right[sharedInd][colInd];
			}
		}
	}
	return result;
	*/
	
	float *result;
	result= malloc(sizeof(float)*(rows*columns));

	int rowInd, colInd, tempProd,sharedInd;
	
	for(rowInd=0;rowInd<rows;rowInd++)
	{
		
		for(colInd=0;colInd<columns;colInd++)
		{
			
			for(sharedInd=0;sharedInd<shared;sharedInd++)
			{
				//*(*(result+rowInd)+colInd)+= *(*(left+rowInd)+sharedInd)+ *(*(right+sharedInd)+colInd);
				*(result+rowInd*columns+colInd)+= *(left+rowInd*shared+sharedInd)+ *(right+sharedInd*columns +colInd);
			}
		}
	}
		return *result;
}
