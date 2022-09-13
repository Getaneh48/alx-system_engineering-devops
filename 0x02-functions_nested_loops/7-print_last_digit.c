#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
*
* @n: int value
*
* Return: int
*/
int print_last_digit(int n)
{
	int last_digit;
	
	if (n < 10)
		last_digit = n;
		_putchar(n + 48)
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
	}

	return (last_digit);
}
