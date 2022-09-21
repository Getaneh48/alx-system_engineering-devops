#include "main.h"

/**
* _strncpy - copies a string
*
* @dest: destination string
* @src: source of a string to be copied.
* @n: number of character to be copied.
*
* Return: the copied string.
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *dest_holder = dest;

	i = 0;
	while (*src != '\0')
	{
		if (i < n)
		{
			*dest = *src;
			src += 1;
			dest += 1;
		}
		else
		{
			break;
		}

		i++;
	}

	if (n > i)
	{
		*dest = '\0';
	}

	return (dest_holder);
}
