#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @s: string to be converted to uppercase.
*
* Return: the converted string to uppercase.
*
*/

char *string_toupper(char *s)
{
	int c;
	char *sn;

	sn = s;
	c = 0;
	while (*s != '\0')
	{
		c = (int) *s;
		if (c >= 97 && c <= 122)
		{
			*s = (char) (c - 32);
		}
		s += 1;
	}

	return (sn);
}
