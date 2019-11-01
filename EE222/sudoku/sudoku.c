#include <stdbool.h>
#include "sudoku.h"
#include <math.h>

// coded by kaelen carling and max weiss

bool fill_board(int(*board)[BOARD_SIZE], int row, int col)
{
	//tests to see if we outside of the boards columns
	//Also causes the function to navigate to next row 
	if(col==BOARD_SIZE)
	{
		row++;
		col=0;
	}
	//are we still on the board or are we at base case
	if(row==BOARD_SIZE)
	{
		return true;
	}
	
	// if its not empty it iterates to the next 
	if(board[row][col]!=0)
	{
		return fill_board(board,row,col+1);
	}
	
	int numFill;
	//checks number 1-9 for a cell
	for(numFill=1; numFill<=BOARD_SIZE; numFill++)
	{
		if(!has_conflict(board,numFill,col,row))
		{
			// fill board with number
			board[row][col]=numFill;
			
			if(fill_board(board,row,col+1))
			{
				//exit condition for completion
				return true;
			}
			//resets current index to 0 if next index has a conflict
			board[row][col]=0;
		}
	}
	//if the function reaches this point there is a conflict
	return false;
}

//checks to see if a guess creates a conflict in the row
bool is_in_row(int (*board)[BOARD_SIZE],int row,int test_number)
{
	int col;
	for(col=0; col < BOARD_SIZE; col++)
	{
		// if there is a conflict at that indices then returns true
		if(board[row][col]==test_number)
		{
			return true;
		}
	}
	return false;
}

//checks to see if a guess creates a conflict in the column
bool is_in_col(int (*board)[BOARD_SIZE],int col ,int test_number)
{
	int row;
	// checks if row contains test number
	for(row=0 ; row < BOARD_SIZE; row++)
	{
		//returns true if row does contain test number
		if(board[row][col]==test_number)
		{
			return true;
		}
	}
	return false;
	
}
//checks to see if a guess creates a conflict in the subgrid
bool is_in_subgrid(int (*board)[BOARD_SIZE],int col,int row,int test_number)
{
	int rowIndex, colIndex;
	//uses modulus to find index of subgrid and then uses a nested for loop to navigate through sub grid
	for(rowIndex=row-(row%3);rowIndex<=(row-(row%3))+2;rowIndex++)
	{
		for(colIndex=col-(col%3); colIndex<=(col-(col%3))+2;colIndex++)
		{
			//returns true if test number is already in sub grid
			if(test_number==board[rowIndex][colIndex])
			{
				return true;
			}
		}
	}
	return false;
}

// checks with all 3 functions for conflicts
bool has_conflict(int (*board)[BOARD_SIZE], int test_number, int col, int row)
{
	return is_in_subgrid(board,col,row,test_number) || is_in_col(board,col,test_number) || is_in_row(board,row,test_number);
}

// fills the diagonal sub grids
void fill_diagonal(int (*board)[BOARD_SIZE])
{
	int subgrid_start, row, col, test_number;
	
	// picks the indices for the beginning of each sub grid
	for(subgrid_start=0; subgrid_start < BOARD_SIZE; subgrid_start+=SUBGRID_SIZE)
	{
		
		//fills the sub grid
		for(row=subgrid_start;row <= subgrid_start+2; row++)
		{
			for(col=subgrid_start; col <= subgrid_start+2; col++)
			{
				//picks a random integer between 1 and 9 that isn't already in the sub grid
				do
				{
					test_number = random_number(1, 9);
				}while(is_in_subgrid(board, col, row, test_number));
				
				board[row][col] = test_number;
			}
		}
	}
}
void remove_cells(int(*board)[BOARD_SIZE],int number_cells)
{
	int cell_count, row, col;
	for(cell_count = 1; cell_count <= number_cells; cell_count++)
	{
		do
		{
		//choose xy coordinates randomly
		row = random_number(0, 8);
		col = random_number(0, 8);
		
		//decide if the number at xy was already erased
		}while(board[row][col] == 0);
		
		//set xy coordinate to 0
		board[row][col] = 0;
	}
}

void write_board (int (*board)[BOARD_SIZE], FILE* stream)
{
	int rowIndex, colIndex;
	
	fprintf(stream, "\n\t#===|===|===#===|===|===#===|===|===#\n");
	for(rowIndex = 0; rowIndex < BOARD_SIZE; rowIndex++)
	{
		fprintf(stream, "\t# ");
		for(colIndex = 0; colIndex < BOARD_SIZE; colIndex++)
		{
			if (board[rowIndex][colIndex] > 0)
			{
				fprintf(stream, "%d", board[rowIndex][colIndex]);
			}
			else
			{
				fprintf(stream, " ");
			}
			if((colIndex + 1) % SUBGRID_SIZE == 0)
			{
				fprintf(stream, " # ");
			}
			else
			{
				fprintf(stream, " | ");
			}
		}
		if ((rowIndex + 1) % SUBGRID_SIZE == 0)
		{
			fprintf(stream, "\n\t#===|===|===#===|===|===#===|===|===#\n");
		}
		else
		{
			fprintf(stream, "\n\t#---|---|---#---|---|---#---|---|---#\n");		
		}
	}
	fprintf(stream, "\n");
}

void show_board(int (*board)[BOARD_SIZE])
{
	write_board(board, stdout);
}

int random_number(int range_start, int range_end)
{
	return rand() % (range_end - range_start + 1) + range_start;
}
