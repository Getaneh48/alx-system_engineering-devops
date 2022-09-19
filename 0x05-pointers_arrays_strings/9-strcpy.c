#include "main.h"
#include <stdlib.h>

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
*
* @dest: character pointer for the destination
* @src: character pointer of source to be copied.
*
* Return: pointer of the destination
*
*/

char *_strcpy(char *dest, char *src)
{
	char *s, *d;

	s = src;
	d = dest;
	while (*s)
	{
		*d = *s;
		s += 1;
		d += 1;
	}

	return (dest);
}

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

	len = 0;
	while (*s)
	{
		len += 1;
		s += 1;
	}
	return (len);
}
