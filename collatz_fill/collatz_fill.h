#ifndef collatz_fill_h
#define collatz_fill_h
#include <stdbool.h>

#define COLLATZ_FILE "collatz.txt"
#define MAX_NUMBER 100

bool collatz_fill(int array[]);
int collatz_max(int array[]);
float collatz_average(int array[]);
int collatz_above_average(int array[]);

#endif
