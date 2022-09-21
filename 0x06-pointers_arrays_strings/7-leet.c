#include "main.h"

/**
* leet - encode a string into 1337.
*
* @s: string to be encoded
*
* Return: the encoded string.
*
*/

char *leet(char *s)
{
	char e_letr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	int encoding_number[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	char *org_s = s;
	int index;

	index = -1;
	while (*s != '\0')
	{
		index = str_indexOf(*s, e_letr);
		if (index >= 0)
		{
			*s = (char) (48 + encoding_number[index]);
		}

		s = s + 1;
	}

	return (org_s);
}

/**
* str_indexOf - finds the index of a character in a string.
*
* @c: the character to be searched for.
* @enc_lettr: the string to be searched.
*
* Return: the index of the character.
*
*/

int str_indexOf(char c, char *enc_lettr)
{
	int index, i;

	index = -1;
	i = 0;

	while (*enc_lettr != '\0')
	{

		if (c == *enc_lettr)
		{
			index = i;
			break;
		}

		i++;
		enc_lettr += 1;
	}

	return (index);

}
