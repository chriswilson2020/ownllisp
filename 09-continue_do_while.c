#include <stdio.h>

int main()
{
	int j = 0;
	do
	{
		if (j==7)
		{
			j++;
			continue;
		}

		printf("%d ", j);
		j++;
	}while(j<10);
	printf("\n");
	return 0;
}
