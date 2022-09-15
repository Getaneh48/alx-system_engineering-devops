#include "main.h"

/**
* print_triangle - prints a triangle using #.
*
* @size: first argument integer size
*
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}

			for (k = size; k >= i; k--)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
