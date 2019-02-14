#include "holberton.h"

/**
 * more_numbers - write numbers 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i, j;
	char numbers[] = "01234567891011121314\0";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; numbers[j] != '\0'; j++)
		{
			_putchar(numbers[j]);
		}
		_putchar('\n');
	}
}
