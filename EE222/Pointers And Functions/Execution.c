#include "Execution.h"
#include "operations.h"

float execute(float x, float y, float (*op)(float, float))
{
	return op(x, y);
}

int execute_all(float x, float y, float (*ops[])(float, float), float** results)
{
	int index = 0;
	int index_ops= 0;
	//while (*(ops+index++))
	// counts number of ops
	while (ops[index++])
	{
		//results[index] = ops[index](x, y);
		//index++;
	}
	index--;
	
	for(; index_ops < index; index_ops++)
	{
		results[index_ops] = ops[index_ops](x, y);
	}
	
	return index;
}
