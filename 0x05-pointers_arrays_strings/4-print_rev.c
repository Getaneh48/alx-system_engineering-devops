#include "main.h"

/**
* print_rev -  a function that prints a string,
* in reverse, followed by a new line
*
* @s: first argument, character pointer
*
*/

void print_rev(char *s)
{
	char *str;
	int len;

	len = _strlen(s) - 1;
	str = &s[len];

	while (str >= s)
	{
		_putchar(*str);
		str -= 1;
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
