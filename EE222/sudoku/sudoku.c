#include <stdbool.h>
#include "sudoku.h"
#include <math.h>

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
	
	if(board[row][col]!=0)
	{
		return fill_board(board,row,col+1);
	}
	int i;
	//checks number 1-9 for a cell
	for(i=1;i<=BOARD_SIZE;i++)
	{
		if(!has_conflict(board,i,row,col))
		{
			board[row][col]=i;
			
			if(fill_board(board,row,col+1))
			{
				//exit condition for completion
				return true;
			}
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
	for(row=0;row<BOARD_SIZE;row++)
	{
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
	int r,c;
	for(r=row-(row%3);r<(row-(row%3))+2;r++)
	{
		for(c=col-(col%3);c<(col-(col%3))+2;c++)
		{
			if(test_number==board[r][c])
			{
				return true;
			}
		}
	}
	return false;
}

bool has_conflict(int (*board)[BOARD_SIZE], int test_number, int col, int row)
{
	return is_in_subgrid(board,col,row,test_number) || is_in_col(board,col,test_number) || is_in_row(board,row,test_number);
}
void fill_diagonal(int (*board)[BOARD_SIZE])
{
	int subgrid_start, row, col, test_number;

	for(subgrid_start=0; subgrid_start < BOARD_SIZE; subgrid_start+=SUBGRID_SIZE)
	{
		for(row=subgrid_start;row<subgrid_start+2; row++)
		{
			for(col=subgrid_start; col < subgrid_start+2; col++)
			{
				do
				{
					test_number = (rand() % 9) + 1;
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
		row = rand() % 9;
		col = rand() % 9;
		
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
		fprintf(stream, "\t#");
		for(colIndex = 0; colIndex < BOARD_SIZE; colIndex++)
		{
			if (board[rowIndex][colIndex] > 0)
			{
				
			}
		}
	}
}
