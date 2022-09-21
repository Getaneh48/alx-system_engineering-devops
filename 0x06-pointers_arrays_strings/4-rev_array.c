#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
*
* @a: array of numbers.
* @n: length of the array.
*
*/

void reverse_array(int *a, int n)
{
	int i, div, temp;

	i = temp = 0;
	div = n / 2;

	for (; i < div; i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
