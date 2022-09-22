#include "main.h"

/**
* cap_string -  capitalizes all words of a string.
*
* @s: string to be capitalize
*
* Return: char pointer of the capitalized string.
*
*/

char *cap_string(char *s)
{
	int c, i;
	int separators[] = {9, 10, 11, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	const int SIZE = 14;
	char *ns = s;

	c = i = 0;

	while (*s != '\0')
	{
		c = (int) *s;
		if (c >= 97 && c <= 122)
		{
			if (i > 0)
			{
				if (_inarray(separators, SIZE, (int) *(s - 1)))
				{
					c = c - 32;
					*s = (char) c;
				}
			}
			else
			{
				if (_inarray(separators, SIZE, (int) *s))
				{
					c = c - 32;
					*s = (char) c;
				}
			}
		}
		s += 1;
		i++;
	}


	return (ns);
}

/**
* _inarray - check if a number is in the array
*
* @arr: array to be searched in
* @len: length of the array.
* @n: the number to be searched in the array
*
* Return: 1 if found else 0.
*
*/

int _inarray(int *arr, int len, int n)
{
	int i, found;

	i = found = 0;

	for (; i < len; i++)
	{
		if (arr[i] == n)
		{
			found = 1;
			break;
		}
	}

	return (found);
}
