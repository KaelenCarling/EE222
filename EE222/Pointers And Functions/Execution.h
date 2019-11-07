#ifndef Execution_h
#define Execution_h

float execute(float x, float y, float (*op)(float, float));
int execute_all(float x, float y, float (*ops[])(float, float), float* results);

#endif
