#include "main.h"

/**
* puts2 -  prints every other character of a string, starting 
* with the first character, followed by a new line.
*
* @s: first argument, character pointer
*
*/

void puts2(char *str)
{

	while (*str)
	{
		_putchar(*str);		
		str += 2;
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
