#include <stdio.h>
#include "main.h"
/**
* main - fibonacci
*
* Return: 0 on success
*/
int main(void)
{
	print_first98_fibonacci();
	return (0);
}

/**
* print_first98_fibonacci - the first 98 fibonacci serious.
*
* Return: void
*/
void print_first98_fibonacci(void)
{
	int x1, x2, i, max, sum;

	x1 = 1;
	x2 = 2;
	i = 1;
	sum = 0;
	max = 98;

	printf("%d, ", x1);
	printf("%d, ", x2);
	while (i <= max)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		if (i < max)
		{
			printf("%d, ", sum);
		}
		else
		{
			printf("%d", sum);
		}
		i++;
	}
	printf("\n");
}
