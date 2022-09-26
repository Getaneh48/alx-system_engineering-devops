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
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s = s + 1;
	}

	return ('\0');
}
