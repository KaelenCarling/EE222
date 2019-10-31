#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	srand((unsigned int) time(NULL));
	int sudoku_board[BOARD_SIZE][BOARD_SIZE];
	int row, col;
	
	// zeros out array
	for(row = 0; row < BOARD_SIZE; row++)
	{
		for(col = 0; col < BOARD_SIZE; col++)
		{
			sudoku_board[row][col] = 0;
		}
	}
	
	fill_diagonal(sudoku_board);
	show_board(sudoku_board);
	fill_board(sudoku_board, 0, 0);
	show_board(sudoku_board);
	
	return 0;
}
