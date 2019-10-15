#include <stdio.h>
#include <stdlib.h>

#define DBG
#include "dbg.h"

#define DATA_FILE "times_table.data"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* times_table;
	int number;
	
	times_table = fopen(DATA_FILE, "r");
	probe(times_table, "Opening file %s failed!", DATA_FILE)
	
	/*
	if(times_table == NULL)
	{
		printf("No times table found");
		goto error;
	}
	*/
	
	debug("File %s opened successfully". DATA_FILE);
	
	while(fscanf(times_table, "%d", &number) == 1)
	{
		printf("%d", number);
	}
	
	fclose(times_table);
	return EXIT_SUCCESS;
	
error:
	printf("file does not exist");
	return EXIT_FAILURE;
}
