#include "main.h"

/**
* print_number - prints an integer.
*
* @n: integer value
*
*/

void print_number(int n)
{
	int orgdigit_length, reversed_digit, reversed_digit_length, sign;

	sign = 0;

	if (n < 0)
	{
		sign = 45;/* save sign of a number. 45 to min -ve */
		n = n * -1;
	}

	if (n == 0)
	{
		_putchar(48);
	}
	else
	{

		orgdigit_length = get_digit_length(n);

		reversed_digit = reverse_number(n, orgdigit_length);
		reversed_digit_length = get_digit_length(reversed_digit);
		display_number(reversed_digit, sign, orgdigit_length, reversed_digit_length);
	}
}

/**
* display_number - output each individual character of a digit to stdout.
* using _putchar function
*
* @rev_digit: integer value of reversed digit
* @sign: integer value 45 for -ve or else
* @org_dig_len: integer value of the orginal digit length
* @rev_dig_len: integer value of the reversed digit length
*
*/

void display_number(int rev_digit, int sign, int org_dig_len, int rev_dig_len)
{
	int i, div, rem, difference;

	if (sign == 45)
		_putchar(45);

	/* break the digit in to individual component and display it */
	do {
		div = rev_digit / 10;
		rem = rev_digit % 10;
		rev_digit = div;

		_putchar(rem + 48);
	} while (div >= 10);

	_putchar(div + 48);

	difference = org_dig_len - rev_dig_len;
	/* if there is a difference display zero for the amount of the difference */

	if (difference > 0)
	{
		for (i = 1; i <= difference; i++)
		{
			_putchar(48);
		}
	}
}

/**
* reverse_number - reverses a number
*
* @digit: integer value of the digit to be reversed
* @length: integer value of the length of the digit to be reversed
*
* Return: integer value of the reversed digit
*
*/
int reverse_number(int digit, int length)
{
	int div, rem, reversed_number;

	div = rem = reversed_number = 0;
	length -= 1;
	do {
		div = digit / 10;
		rem = digit % 10;
		digit = div;
		reversed_number = reversed_number + (rem * power(10, length));
		length -= 1;
	} while (div >= 10);

	reversed_number += div;

	return (reversed_number);

}

/**
* get_digit_length - get the length of a digit.
*
* @digit: integer value of a digit to be checked.
*
* Return: integer value of the length of a digit.
*
*/
int get_digit_length(int digit)
{
	int len, div;

	len = 1;

	do {
		div = digit / 10;
		digit = div;
		len += 1;

	} while (div >= 10);

	return (len);

}

/**
* power - get the result of a power of a base to its exponent.
*
* @base: integer value of the base value
* @exp: integer value of the exponent value
*
* Return: integer value of the result.
*
*/
int power(int base, int exp)
{

	int result;

	result = base;

	while (exp > 1)
	{
		result *= base;
		--exp;
	}

	return (result);
}
