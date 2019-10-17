#ifndef sudoku_h
#define sudoku_h

#include <stdbool.h>

#define BOARD_SIZE 9

bool fill_all(int(*board)[BOARD_SIZE], int row, int col);
#endif
