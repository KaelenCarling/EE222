#ifndef collatz_h
#define collatz_h
#include <stdbool.h>
#include "dbg.h"

#define MAX_NUMBER 100
#define COLLATZ_FILE "collatz.txt"
// Program written by kaelen carling and maxwell weiss


bool collatz_upload(int array[]);
void collatz_print_array( int (*array_copy)[2] );
void collatz_copy_array(int array[], int (*array_copy)[2]);

void selection_sort(int (*array_copy)[2]);


#endif
