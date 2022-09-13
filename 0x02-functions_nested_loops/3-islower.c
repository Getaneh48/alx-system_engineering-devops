#include "main.h"
/**
* _islower - check if a character is lowercase.
* @c: int value of a character
*
* Description: check if a character is lowercase.
*
* param: c
*
* Return: 1 if it is lower and 0 if it is capital.
*/
int _islower(int c)
{
	if (c >= 65 && c <= 91)
		return (0);
	else if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
