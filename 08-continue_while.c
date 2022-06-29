#include <stdio.h>

int main()
{
	int counter=10;
	while (counter >=0)
	{
		if (counter==7)
		{
			counter--;
			continue;
			/* when counter is 7 then we decrement the counter
			 * but then we call continue this causes the program
			 * to jump out of the while loop and start again
			 * the consequence is that the print function 
			 * is never called
			 */
		}
		printf("%d ", counter);
		counter--;
	}
	printf("\n");
	return 0;
}
