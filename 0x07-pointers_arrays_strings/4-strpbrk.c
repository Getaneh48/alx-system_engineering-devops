#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
*
* @s: string to search for
* @accept: string to be searched
*
* Return: a pointer to the byte in s that matches one of the bytes in accept
* , or NULL if no such byte is found.
*
*/

char *_strpbrk(char *s, char *accept)
{
	int match_found = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				match_found = 1;
				break;
			}
			accept++;
		}

		if (match_found)
			break;
		s++;
	}

	return (accept);
}
