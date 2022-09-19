#include "main.h"

/**
* puts2 -  prints every other character of a string, starting
* with the first character, followed by a new line.
*
* @str: first argument, character pointer
*
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str += 1;
		i += 1;
	}

	_putchar('\n');
}
