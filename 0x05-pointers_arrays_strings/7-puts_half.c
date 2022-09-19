#include "main.h"

/**
* puts_half -  prints half of a string, followed by a new line.
* with the first character, followed by a new line.
*
* @str: first argument, character pointer
*
*/

void puts_half(char *str)
{
	int len, div;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		div = len / 2;
		str = str + div;
	}
	else
	{
		div = (len - 1) / 2 + 1;
		str = str + div;
	}

	while (*str)
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');

}

/**
* _strlen -  returns the length of a string.
*
* @s: character pointer
*
* Return: integer length of a string.
*
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s += 1;
	}

	return (i);
}
