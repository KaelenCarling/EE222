#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x=5;
	int y=10;
	
	int *ptr_x=&x;
	int *ptr_y;
	
	ptr_x;
	ptr_y=&y;
	
	printf("Value x: %d \n",x);
	printf("value y: %d\n",y);
	printf("address x: %p\n",&x);
	printf("address y: %p\n",&y);
	printf("value ptr_x: %p\n",ptr_x);
	printf("value ptr_y: %p\n",ptr_y);
	printf("address ptr_x: %p\n",&ptr_x);
	printf("address ptr_y: %p\n",&ptr_y);
	
	//new concept arrays
	int z[5]={0,1,2,3,4};
	int *ptr_array = &z[0];
	printf("%p",*(ptr_array+2));
	
	
	return 0;
}
