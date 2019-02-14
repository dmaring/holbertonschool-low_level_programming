#include "holberton.h"

/**
 * more_numbers - write numbers 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j <= 9)
				_putchar(j + '0');
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
