#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet.
*
* Description:  a function that prints 10 times the alphabet,
* in lowercase, followed by a new line
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i, j;
	int max = 10;

	for (j = 1; j <= max; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
