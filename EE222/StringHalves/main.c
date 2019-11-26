#include <stdio.h>
#include <stdlib.h>
#include "stringHalves.h"

/* Coded by max weiss and kaelen carling*/

int main(int argc, char *argv[]) {
	
	char test1[] = "EE222";
	char test2[] = "whatever";
	
	printf("test 1\n--------------------------------\n");
	printf(test1);
	printf("\n");
	swap_half(test1);
	printf(test1);
	
	printf("\n\ntest 2\n--------------------------------\n");
	printf(test2);
	printf("\n");
	swap_half(test2);
	printf(test2);
	
	return 0;
}
