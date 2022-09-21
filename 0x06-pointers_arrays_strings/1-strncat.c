#include "main.h"

/**
* _strncat - concatenates two strings.
*
* @dest: the source string will be cancatenated to.
* @src: the source string that will be concatenated to dest.
* @n: the number of bytes to concatenate
*
* Return: the concatenated string
*
*/

char *_strncat(char *dest, char *src, int n)
{
	char *org_dest = dest;
	char *org_src = src;
	int i;

	i = 0;

	dest = dest + _strlen(dest);

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
			*dest = '\0';
			break;
		}

		i++;
	}

	return (org_dest);

}

/**
* _strlen - gets the length of a string.
*
* @str: a string which a length to be found.
*
* Return: the length of the string
*
*/

int _strlen(char *str)
{
	int i = 0;

	whilev(*str != '\0')
	{
		i++;
		str += 1;
	}

	return (i);
}
