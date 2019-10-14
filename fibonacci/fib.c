#include "fib.h"

/* coded by Kaelen Carling and Max Weiss */
int fib(int number)
{
	//instantiates variables
	int prev, prev1, cur, seqNum;
	
	// prev and prev 1 hold the two previous values. cur holds the value for the current shift. 
	// seqNum holds the number that the program is currently on on the sequence
	prev = 0;
	cur = 1;
	prev1 = 1;
	seqNum = 2;
	
	// loop to reach current sequence number
	while(seqNum <= number)
	{
		if(seqNum == number)
		{
			return prev + prev1;
		}
		// "shifts" prev up 1
		prev=prev1;
		
		// "shifts" prev1 up 2
		prev1=cur;
		
		// "shifts" the current value up 1
		cur=prev+prev1;
		
		//incriments the sequence number
		seqNum++;
	}
}
