#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
*/
void times_table(void)
{
	int i, j, times, rem, div;

	div = 0;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;
			if (times <= 9)
			{
				_putchar(' ');
				_putchar(times + 48);
			}
			else
			{
				div = times / 10;
				rem = times % 10;
				_putchar(div + 48);
				_putchar(rem + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
