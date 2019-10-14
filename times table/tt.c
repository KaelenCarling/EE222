#include "tt.h"
#include "dbg.h"

//Written by Max weiss and Kaelen Carling

void write_tt(void)
{
	int rows, columns;
	int value;
	FILE* times_table;
	
	times_table = fopen(DATA_FILE, "wb");
	probe(times_table, "Error opening file %s", DATA_FILE);
	
	fseek(times_table, 0, SEEK_SET);
	
	for(rows = 1; rows <= DIMENSION; rows++)
	{
		for(columns = 1; columns <= DIMENSION; columns++)
		{
			value = rows*columns;
			fwrite(&value, sizeof(int), 1, times_table);
		}
	}
	fclose(times_table);
	return;
	
error:
	printf("Oopsie!");
	return;
}

void read_tt(void)
{
	int value;
	FILE* times_table;
	int count = 0;
	
	times_table = fopen(DATA_FILE, "rb");
	probe(times_table, "Error opening file %s", DATA_FILE);
	
	fseek(times_table, 0, SEEK_SET);
	
	while (fread(&value, sizeof(int), 1, times_table) == 1)
	{
		printf("%4d ", value);
		
		if(!(++count % DIMENSION))
		{
		printf("\n");
		}
	}
	
	fclose(times_table);
	return;

error:
	printf("Oopsie!");
	return;
}

int result_tt(int x, int y)
{
	int product = 0;
	int number_element;
	FILE* times_table;
	
	times_table = fopen(DATA_FILE, "rb");
	// if statement to see if the file opening is valid
	if(times_table == NULL)
	{
		printf("Opening file % failed\n", DATA_FILE);
		return 0;
	}
	
	// determine offset
	fseek(times_table, sizeof(int), SEEK_SET);
	
	//read data at exact point
	while (fread(&number_element, sizeof(int), 1, times_table) == 1)
	{
		// checks to see if the current value is the product of x and y
		if(number_element == (x*y))
		{
			// if the current value is correct then it sets equal to the product
			product = number_element;	
		} 
	}
	
	// closes file and returns the found product
	fclose(times_table);
	return product;
	
error:
	printf("Oopsie!");
	return;
}
