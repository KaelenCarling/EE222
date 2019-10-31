#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void array_pointers(int(*array_ptr)[3]);

int main(int argc, char *argv[]) {
	
	int array[2][3] = {{11, 12,13}, {21, 22, 23}};
	
	array_pointers(array);
	
	return 0;
}

void array_pointers(int(*array_ptr)[3])
{
	int* int_ptr = *array_ptr;
	
	printf("*(int_ptr+1) %d\n", *(int_ptr+1));
	printf("**array_ptr %d\n", **array_ptr);
	printf("**(array_ptr+1) %d\n", **(array_ptr+1));
}
