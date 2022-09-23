#include "main.h"

/**
* rot13 - encodes a string using rot13.
*
* @s: string to be encoded/decoded
*
* Return: the encoded/decoded string.
*
*/

char *rot13(char *s)
{
	int c;
	char *org_s = s;

	while (*s != '\0')
	{
		c = (int) *s;

		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			
			if (c >= 65 && c <= 90)
			{

				c = c + 13;
				if (c > 90)
				{
					c = 65 + c % 90 - 1;
				}
			}
			else
			{

				c = c + 13;
				if (c > 122)
				{
					c = 97 + (c % 122) - 1;
				}
			}

			*s = (char) c;
		}

		s = s + 1;
	}

	return (org_s);

}

