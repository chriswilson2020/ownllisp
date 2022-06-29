// C program to demonstrate switch
//

#include <stdio.h>

int main()
{
	int num = 2;

	switch(num+2)
	{
		case 1:
			printf("Case 1: Value is: %d\n", num);
		case 2:
			printf("Case 2: Value is: %d\n", num);
		case 3:
			printf("Case 3: Value is: %d\n", num);
		default: 
			printf("Default: Value is: %d\n", num);
	}

	return 0;
}
