#include <stdbool.h>
#include "sudoku.h"


bool fill_board(int(*board)[BOARD_SIZE], int row, int col)
{
	//tests to see if we outside of th boards columns
	if(col>=BOARD_SIZE)
	{
		row++;
		col=0;
	}
	//are we still on the board or are we at base case
	if(row>=BOARD_SIZE)
	{
		return true;
	}
	
	int i;
	//checks number 1-9 for a cell
	for(i=1;i<=9;i++)
	{
		if(!(isInRow(board,row,i))&&!(isInCol(board,col,i))&&!(isInSubGrid()))
		{
			board[row][col]=i;
			
			if(fill_board(board,row,col+1))
			{
				return true;
			}
			board[row][col]=0;
		}
	}
	//if the function reaches this point there is a conflict
	return false;
}

//checks to see if a guess creates a conflict in the row
bool isInRow(int (*board)[BOARD_SIZE],int row,int number)
{
	for(int i=0;i<BOARD_SIZE;i++)
	{
		if(board[row][i]==number)
		{
			return true;
		}
	}
	
}

//checks to see if a guess creates a conflict in the column
bool isInCol(int (*board)[BOARD_SIZE],int col ,int number)
{
	for(int i=0;i<BOARD_SIZE;i++)
	{
		if(board[i][col]==number)
		{
			return true;
		}
	}
	
}
//checks to see if a guess creates a conflict in the subgrid
bool isInSubGrid(int (*board)[BOARD_SIZE],int col,int row,int number)
{
	int
	
	for()
	
}
