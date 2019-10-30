#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sudoku_board[BOARD_SIZE][BOARD_SIZE];
	
	fill_diagonal(sudoku_board);
	fill_board(sudoku_board, 0, 0);
	
	return 0;
}
