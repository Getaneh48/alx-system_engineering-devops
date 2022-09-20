#include "main.h"

/**
* _atoi -  convert a string to an integer
*
* @s: string pointer
*
* Return: integer value of converted string
*
*/
int _atoi(char *s)
{
	int num, prev_char, array_element, index, result, isngv;

	array_element = isngv = index = 0;
	while (*s)
	{
		num = (int)(*s);
		if (num >= 48 && num <= 57)
		{
			if (array_element == 0)
			{
				if (index > 0)
				{
					prev_char = (int)(*(s - 1));
					if (prev_char == 45)
						isngv = 1;
				}
				result = result + (num - 48) * power(10, array_element);
				array_element++;
			}
			else
			{
				prev_char = (int) (*(s - 1));
				if (prev_char >= 48 && prev_char <= 57)
				{
					result = result + (num - 48) * power(10, array_element);
					array_element++;
				}
				else
					break;
			}
		}
		index += 1;
		s = s + 1;
	}
	result = reverse_number(result);
	if (isngv)
		result = result * -1;

	return (result);
}

/**
* reverse_number - reverses a number
*
* @n: number to be reversed
*
* Return: the reversed number
*
*/

int reverse_number(int n)
{
	int rem, div, nlen, result;

	nlen = number_length(n);
	result = 0;

	do {
		div = n / 10;
		rem = n % 10;
		n = div;
		result = result + rem * power(10, nlen - 1);
		nlen--;
	} while (div >= 10);

	result += div;

	return (result);
}

/**
* number_length - get the length of a number
*
* @n: the number the length to be checked
*
* Return: the length of the number
*
*/

int number_length(int n)
{
	int div, c;

	c = 1;
	do {
		div = n / 10;
		n = div;
		c++;
	} while (div >= 10);

	return (c);
}

/**
* power - calculates the power of a number.
*
* @base: base of the number.
* @exp: exponent of the base.
*
* Return: the result of a number powered to its exponent.
*
*/

int power(int base, int exp)
{
	int p;

	p = base;
	if (exp > 0)
	{
		while (exp > 1)
		{
			p = p * base;
			exp--;
		}
	}
	else
	{
		p = 1;
	}

	return (p);
}

