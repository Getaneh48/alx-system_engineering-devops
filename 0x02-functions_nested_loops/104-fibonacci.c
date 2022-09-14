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
	int i, max;
	union u_x1 {
		long int x;
	} ux1,ux2,sum;

	ux1.x = 1;
        ux2.x = 2;
	sum.x = 0;

	i = 1;
	max = 98;

	printf("%ld, ", ux1.x);
	printf("%ld, ", ux2.x);
	while (i <= max)
	{
		sum.x = ux1.x + ux2.x;

		ux1.x = ux2.x;
		ux2.x = sum.x;
		if (i < max)
		{
			printf("%ld, ", sum.x);
		}
		else
		{
			printf("%ld", sum.x);
		}
		i++;
	}
	printf("\n");
}
