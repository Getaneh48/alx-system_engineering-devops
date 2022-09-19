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

	while (*s != '\0')
	{
		len += 1;
		s++;
	}

	return (len);
}
