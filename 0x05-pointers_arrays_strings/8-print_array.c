#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line.
*
* @a: first atgument integer pointer
* @n: second argument integer
*
*/

void print_array(int *a, int n)
{
	int i, len;

	i = 0;
	len = sizeof(a);

	if (n > 0 && n < len)
	{
		for (; i < n; i++)
		{
			if (i < n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
