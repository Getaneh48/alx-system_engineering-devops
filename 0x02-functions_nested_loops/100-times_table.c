#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0.
*
* @n: int val
*/
void print_times_table(int n)
{
	int i, j, times;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times = i * j;
				if (times <= 9)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(times + 48);
				}
				else if (times < 100)
				{
					_putchar(' ');
					_putchar(' ');
					getNumbersOfDigit(times);
				}
				else
				{
					getNumbersOfDigit(times);
				}

				if (j < n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}

/**
* getNumbersOfDigit - print individual digits of a number.
*
* @num: int val
*/
void getNumbersOfDigit(int num)
{
	int div, rem, buf[5], aindex, m;

	aindex = 0;
	if (num >= 100)
	{
		_putchar(' ');
	}
	do {
		div = num / 10;
		rem = num % 10;
		num = div;
		buf[aindex] = rem;
		aindex += 1;
	} while (div >= 10);
	buf[aindex] = div;
	for (m = aindex; m >= 0; m--)
	{
		_putchar(buf[m] + 48);
	}
}
