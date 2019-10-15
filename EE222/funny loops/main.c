#include <stdio.h>
#include <stdlib.h>

/* coded by Max Weiss and Kaelen Carling */

int main(int argc, char *argv[]) {
	int in, out;
	// labels for formatted output 
	printf("Fahrenheit	Celcius\n");
	
	// loop that increments positively by 10
	for(out = 0; out <= 100; out += 10)
	{
		// loops down from four by -1
		for(in = 3; in >= 0; in--)
		{
			// prints fahrenheit number and then celcius number
			printf("%i		%.2f\n", (in+out), ((in+out) - 32)*(5.0/9.0));
		}
	}
	
	return 0;
}
