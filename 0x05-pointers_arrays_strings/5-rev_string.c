#include "main.h"

/**
* rev_string -  a function that prints a string,
* in reverse, followed by a new line
*
* @s: first argument, character pointer
*
*/

void rev_string(char *s)
{
	char *str, temp;
	int len;

	len = _strlen(s) - 1;
	str = &s[len];

	while (str != s)
	{
		temp = *s;
		*s = *str;
		*str = temp;

		str -= 1;
		s += 1;
	}

}

/**
* _strlen -  returns the length of a string.
*
* @s: character pointer
*
* Return: integer length of a string.
*
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s += 1;
	}

	return (i);
}
