#include "main.h"

/**
* _strchr - locates a character in a string.
*
* @s: A str represents the original string in
* which the character is to be searched.
* @c: the character to be searched.
*
* Return: a pointer to the first occurence of the character.
*
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
