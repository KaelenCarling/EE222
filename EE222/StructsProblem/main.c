#include <stdio.h>
#include <stdlib.h>

#define DATA_FILE "students.txt"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct _person person;
struct _person
{
	char first_name[20];
	char last_name[20];
	int age;	
};

int main(int argc, char *argv[]) {
	FILE* student_records;
	
	student_records = fopen(DATA_FILE, "r");
	
	if(student_records == NULL)
	{
		printf("Opening file % failed\n", DATA_FILE);
		return 0;
	}
	
	int index = 0;
	person person_array[10];
	//&(person_array[0].age) you need this because its not an address
	//person_array[0].first_name this is fine because it is an address
	while(fscanf(student_records, "%s %s %d", person_array[index].first_name, person_array[index].last_name, &person_array[index].age ) == 3)
	{
		index++;
		
		//steps
		//1. person_last->next = person_next
		//2. person_last = person_next
		//3. person_last->next = NULL;
		//4. person_next = malloc()
		//5. eventually free(person_next)
	}
	printf("%s %s %d", person_array[3].first_name, person_array[3].last_name, person_array[3].age);
	return 0;
}

/*



*/


