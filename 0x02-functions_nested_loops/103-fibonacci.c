#include <stdio.h>
#include "main.h"
/**
* main - fibonacci
*
* Return: 0 on success
*/
int main(void)
{
	print_sumeven_fibonacci();
	return (0);
}

/**
* print_sumeven_fibonacci - prints a fibonacci serious up to 50.
*
* Return: void
*/
void print_sumeven_fibonacci(void)
{
	long int x1, x2, sum, max, total;

	x1 = 1;
	x2 = 2;
	sum = 0;
	max = 4000000;
	total = 0;
	while (sum <= max)
	{
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
		if (sum % 2 == 0 && sum <= max)
		{
			total += sum;
		}
	}
	printf("%ld\n", total + 2);
}
