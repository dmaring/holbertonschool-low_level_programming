#include "holberton.h"

/**
 * print_most_numbers - prints the number 0 - 9
 * except for 2 and 4 followed by a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			;
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
