#include <stdio.h>
#include "main.h"
/**
* main - fibonacci
*
* Return: 0 on success
*/
int main(void)
{
	print_fibonacci();
	return (0);
}

/**
* print_fibonacci - prints a fibonacci serious up to 50.
*
* Return: void
*/
void print_fibonacci(void)
{
	int x1, x2, sum, i, max;

	x1 = 1;
	x2 = 2;
	i = 1;
	sum = 0;
	max = 10;

	printf("%d, ", x1);
	printf("%d, ", x2);
	while (i <= max - 2)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		if (i < max -2)
			printf("%d, ", sum);
		else
			printf("%d", sum);
		i++;
	}
	printf("\n");
}
