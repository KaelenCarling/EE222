#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

/* coded by kaelen carling and max weiss */

int main(int argc, char *argv[]) 
{
	int rows=2;
	int columns=4;
	int shared=3;
 	float left[2][3] = {{1,2,3},{4,5,6}};
	float right[3][4] = {{7,8,9,10},{11,12,13,14},{15,16,17,18}};
	float* result= matrix_multiplication(&left[0][0],&right[0][0],rows,shared,columns);
	
	int rowInd, colInd;
	
	//prints the result matrix
	for(rowInd = 0; rowInd < rows; rowInd++)
	{
		for(colInd = 0; colInd < columns; colInd++)
		{
			printf("%4.0f ", *(result+(rowInd*columns)+colInd));
		}
		printf("\n");
	}
	return 0;
}
