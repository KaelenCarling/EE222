#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// for loop goes from 1 - 10
	int inc;
	for(inc = 1; inc <= 10; inc++)
	{
		printf("%i ", inc);
	}
	
	printf("\n");
	
	// loop3
	inc=1;
	while(inc<=10)
	{
		printf("%i ", inc);
		inc++;
	}
	
	printf("\n");
	
	// loop 3
	for(inc = 10; inc >= 1; inc--)
	{
		printf("%i ", inc);
	}
	
	printf("\n");
	
	// loop 4
	inc=10;
	while(inc >=1)
	{
		printf("%i ", inc);
		inc--;
	}
	
	printf("\n");
	
	// loop 5
		for(inc = 11; inc-- > 1;)
	{
		printf("%i ", inc);
	}
	
	printf("\n");
	
	// loop 6
	inc=11;
	while(inc-- >1)
	{
		printf("%i ", inc);
	}
	
	return 0;
}
