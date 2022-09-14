#include <stdio.h>
#include "main.h"
/**
* main - print sum
*
* Return: int
*/
int main(void)
{
	printf("printing sum\n");
	print_natural_sum();
	return (0);
}

/**
* print_natural_sum - print sum
*
*/
void print_natural_sum(void)
{
	int sum, n, index, x1m, x2m,  max,  x1, x2;

	x1 = 3;
	x2 = 5;

	n = 1;
	index = 1;
	sum = 0;
	max = 1024;

	while (n > 0)
	{
		x1m = (x1 * index >= max) ? 0 : (x1 * index);
		x2m = ((x2 * index) >= max) ? 0 : (x2 * index);
		if (x1m == 0 && x2m == 0)
		{
			n = 0;
		}
		sum += (x1m + x2m);
		index += 1;
	}
	printf("%d\n", sum);
	printf("index is %d", index);
}
