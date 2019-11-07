#ifndef sudoku_h
#define sudoku_h

#include <stdbool.h>
#include <stdio.h>

#define BOARD_SIZE 9
#define SUBGRID_SIZE 3

bool fill_board(int(*board)[BOARD_SIZE], int row, int col);
bool is_in_row(int(*board)[BOARD_SIZE],int row, int test_number);
bool is_in_col(int(*board)[BOARD_SIZE],int col,int test_number);
bool is_in_subgrid(int(*board)[BOARD_SIZE],int col, int row, int test_number);
bool has_conflict(int(*board)[BOARD_SIZE],int test_number,int col, int row);
void fill_diagonal(int (*board)[BOARD_SIZE]);
void remove_cells(int(*board)[BOARD_SIZE],int number_cells);
void write_board (int (*board)[BOARD_SIZE], FILE* stream);
void show_board(int (*board)[BOARD_SIZE]);
#endif
