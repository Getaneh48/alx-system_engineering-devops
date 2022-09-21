#include "main.h"

/**
* _strcmp - compares two strings
*
* @s1: first string argument
* @s2: second string argument
*
* Return: <0 if s1 < s2 >0 if s1 > s2 and 0 if they are equal.
*
*/
int _strcmp(char *s1, char *s2)
{
	int c1, c2;

	c1 = (int) *s1;
	c2 = (int) *s2;

	return (c1 - c2);
}
