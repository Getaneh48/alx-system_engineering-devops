#include "main.h"

/**
* _islower -  checks for lowercase character.
*
* c -  int
* Return: int value
*/
int _islower(int c)
{

	if (c >= 65 && c <= 91)
	{
		return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
