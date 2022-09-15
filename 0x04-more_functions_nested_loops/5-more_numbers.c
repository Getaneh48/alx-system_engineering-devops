#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*
*/

void more_numbers(void)
{
	int i, j, div, rem;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			div = j / 10;
			rem = j % 10;
			if (div < 1)
			{
				_putchar(rem + 48);
			}
			else
			{
				_putchar(div + 48);
				_putchar(rem + 48);
			}

		}
		_putchar('\n');
	}
}
