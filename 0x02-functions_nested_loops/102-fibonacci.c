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
	long int x1, x2, sum, i, max;

	x1 = 1;
	x2 = 2;
	i = 1;
	sum = 0;
	max = 50;

	printf("%ld, ", x1);
	printf("%ld, ", x2);
	while (i <= max - 2)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		if (i < max - 2)
			printf("%ld, ", sum);
		else
			printf("%ld", sum);
		i++;
	}
	printf("\n");
}
