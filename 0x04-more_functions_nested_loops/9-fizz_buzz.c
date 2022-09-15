#include "main.h"

/**
* fizzbuzz - prints the numbers from 1 to 100, followed by
* a new line. But for multiples of three print Fizz
* instead of the number and for the multiples
* of five print Buzz. For numbers which are multiples
* of both three and five print FizzBuzz
*
*/

void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 3)
		{
			printf("%d ", i);
		}
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				(i < 100) ? printf("FizzBuzz ") : printf("FizzBuzz");
				continue;
			}

			if (i % 3 == 0)
			{
				(i < 100) ? printf("Fizz ") : printf("Fizz");
				continue;
			}

			if (i % 5 == 0)
			{
				(i < 100) ? printf("Buzz ") : printf("Buzz");
				continue;
			}

			(i < 100) ? printf("%d ", i) : printf("%d", i);
		}
	}

	printf("\n");
}

/**
* main - entry of program
*
* Return: 0 success
*/

int main(void)
{
	fizzbuzz();
	return (0);
}
