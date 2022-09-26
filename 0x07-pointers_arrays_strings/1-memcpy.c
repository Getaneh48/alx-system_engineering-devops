#include "main.h"

/**
* _memcpy - copies memory area
*
* @dest: a pointer to destination memory area to copy to.
* @src: a pointer to source memory area to copy from.
* @n: the number of bytes to copy.
*
* Return: a pointer to destination
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *o_dest = dest;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		src = src + 1;
		dest = dest + 1;
		i++;
	}

	return (o_dest);
}
