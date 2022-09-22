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
	char *org_e_letr;
	int index = 0;

	while (*s != '\0')
	{
		index = 0;

		org_e_letr = e_letr;

		while (*org_e_letr != '\0')
		{
			if (*s == *org_e_letr)
			{
				*s = (char) (48 + encoding_number[index]);
				break;
			}

			org_e_letr += 1;
			index++;
		}

		s = s + 1;
	}

	return (org_s);
}
