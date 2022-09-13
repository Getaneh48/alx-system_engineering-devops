#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line.
*
* @n: int val
*/
void print_to_98(int n)
{
	int  max, i, j;

	max = 98;
	if (n == max)
	{
		printf("%d\n", n);
	}
	else if (n < max)
	{
		for (i = n; i <= max; i++)
		{
			if (j < max)
				printf("%d ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (j = n; j >= max; j--)
		{
			if (j < max)
				printf("%d, ", j);
			else
				printf("%d", j);
		}
	}
	printf("\n");
}
