#include "main.h"

/**
* _memset -  fills memory with a constant byte.
*
* @s: a pointer to the block of memory to fill.
* @b: the value to fill the memory
* @n: the number of bytes to fill the memory
*
* Return: a pointer to the memory area.
*
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *o_s = s;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*s = b;
		s = s + 1;
		i++;
	}

	return (o_s);
}
