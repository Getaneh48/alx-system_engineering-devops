#include <stdio.h>
#include "main.h"
/**
* main - print sum
*
* Return:  int 
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
void print_natural_sum()
{
	int sum, n, index, x1m, x2m,  max,  x1, x2;

	x1 = 3;
	x2 = 5;

	n = 1;
	index = 1;
	sum = 0;
	max = 9;

	while (n)
	{
		x1m = ((x1 * index) >= max) ? 0 : (x1 * index);
		x2m = ((x2 * index) >= max) ? 0 : (x2 * index);
		sum += (x1m + x2m);
		printf("%d - %d\n", x1m, x2m);
		if (x1m >= max && x2m >= max)
		{
			n = 0;
		}
		index += 1;
	}
	printf("%d\n", sum);
}
