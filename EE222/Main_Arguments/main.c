#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int index;
	do
	{
		printf(argv[index]);
		index++;
	}while(index < argc);
	
	return 0;
}
