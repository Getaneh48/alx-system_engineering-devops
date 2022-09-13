#include "main.h"
/**
* main - check the code
*
* Return: Always 0
*/
int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	 _putchar('\n');
	return (0);
}
