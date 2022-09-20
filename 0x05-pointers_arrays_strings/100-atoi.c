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
	int num, arr[10], prev_char, array_element, j, index, result, isngv;

	array_element = j = isngv = index = 0;
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
					{
						isngv = 1;
					}
				}

				arr[array_element] = num - 48;
				array_element++;
			}
			else
			{
				prev_char = (int) (*(s - 1));
				if (prev_char >= 48 && prev_char <= 57)
				{
					arr[array_element] = num - 48;
					array_element++;
				}
				else
					break;
			}
		}
		index += 1;
		s = s + 1;
	}
	result = convert_to_number(arr, array_element, isngv);
	return (result);
}

/**
* convert_to_number - converts array of numbers into an integer value
*
* @numbers: array of integers.
* @length: length of the array.
* @isNgv: 0 positive 1 negative number
*
* Return: an integer reprsentation of the array
*
*/

int convert_to_number(int *numbers, int length, int isNgv)
{
	int i, sum;

	i = length - 1;
	sum = 0;

	while (i >= 0)
	{
		sum = sum + numbers[(length - 1) - i] * power(10, i);
		i--;
	}

	if (isNgv)
	{
		sum = sum * -1;
	}

	return (sum);
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

