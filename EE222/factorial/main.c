#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int returnValue = fac(10);
	printf("val = %d", returnValue);

	return 0;
}

int fac(int number)
{
	if(number == 0)
	{
		return 1;
	}
	else
	{
		return number * fac(number-1);
	}
}
