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
	len = _arrlen(a);

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
/**
* _arrlen - counts the elements of an array.
*
* @num: integer array pointer
*
* Return: the length of an integer array
*
*/
int _arrlen(int *num)
{
	int len;

	len = 0;
	while (*num)
	{
		len += 1;
		num += 1;
	}

	return (len);
}
