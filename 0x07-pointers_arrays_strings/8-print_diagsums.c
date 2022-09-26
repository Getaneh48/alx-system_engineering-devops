#include "main.h"

/**
* print_diagsums - prints the sum of the two
* diagonals of a square matrix of integers.
*
* @a: 2d array of integers.
* @size: size of the array.
*
*/
void print_diagsums(int *a, int size)
{
	int sum_d1, sum_d2, i, j;

	sum_d1 = sum_d2 = j = 0;

	for (i = 0; i < size; i++)
	{
		j = i;
		sum_d1 += *((a + i * size) + j);
	}

	for (i = 0; i < size; i++)
	{
		j = (size - 1) - i;
		sum_d2 += *((a + j * size) + i);
	}

	printf("%d, %d\n", sum_d1, sum_d2);
}
