#include "tt.h"
#include "dbg.h"


void write_tt(void)
{
	int rows, columns;
	int value;
	FILE* times_table;
	
	times_table = fopen(DATA_FILE, "wb";
	probe(times_table, "Error opening file %s", DATA_FILE);
	
	fseek(times_table, 0, SEEK_SET);
	
	for(rows = 1; rows <= DIMENSION; coumns++)
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
	printf("Oopsie!";)
	return;
}

void read_tt(void)
{
	int value;
	FILE* times_table;
	int count = 0;
	
	times_table = fopen(DATA_FILE, "rb";
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
	printf("Oopsie!";)
	return;
}

int result_tt(int x, int y)
{
	int product = 0;
	int number_element;
	FILE* times_table;
	
	times_table = fopen(DATA_FILE, "rb";);
	if(times_table == NULL)
	{
		printf("Opening file % failed\n", DATA_FILE);
		return 0;
	}
	
	
	
	
	fclose(times_table);
	return product;
	
error:
	printf("Oopsie!";)
	return;
}
