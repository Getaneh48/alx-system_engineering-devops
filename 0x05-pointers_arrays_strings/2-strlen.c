#include "main.h"

/**
* _strlen - a function that returns the length of a string.
*
* @s: character pointer
*
* Return: integer value of the length of a string.
*
*/

int _strlen(char *s)
{
	int len;

	while (*s)
	{
		len += 1;
		s += 1;
	}

	return (len);
}
