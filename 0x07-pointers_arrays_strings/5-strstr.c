#include "main.h"

/**
* _strstr - locates a substring.
*
* @haystack: a string to be searched for.
* @needle: a string to search
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*
*/

char *_strstr(char *haystack, char *needle)
{
	int len, i;
	char *o_needle = needle;

	len = 0;
	i = 0;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			len++;
			needle++;
		}
		else
		{
			len = 0;
			needle = o_needle;
		}

		haystack++;
		i++;

		if (*needle == '\0')
			break;
	}

	if (len == 0)
		return (NULL);

	haystack = haystack - len;

	return (haystack);
}
