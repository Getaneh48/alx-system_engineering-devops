#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
*
* @s: string to be scanned.
* @accept: string containing the
* characters to match.
*
* Return: the number of characters
* in the initial segment of str1
*
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, prev_len;
	char *o_accept = accept;

	len = prev_len = 0;

	while (*s != '\0')
	{
		accept = o_accept;
		prev_len = len;
		while(*accept != '\0')
		{
			if (*s == *accept)
			{
				len += 1;
				break;
			}

			accept = accept + 1;
		}


		if (prev_len == len)
			break;

		s = s + 1;
	}

	return (len);
}
