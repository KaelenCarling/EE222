#ifndef collatz_h
#define collatz_h
#include <stdbool.h>
#include "dbg.h"

#define MAX_NUMBER 100
#define COLLATZ_FILE "collatz.txt"

bool collatz_fill(int array[]);
bool collatz_upload(int array[]);


#endif
