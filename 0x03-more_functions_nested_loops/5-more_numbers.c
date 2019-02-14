#include "holberton.h"

/**
 * more_numbers - write numbers 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i, j, pf, ps;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{

			if (j <= 9)
				pf = j;
			else
			{
				pf = j / 10;
				ps = j % 10;
			}
			_putchar(pf + '0');

			if (ps)
				_putchar(ps + '0');
			ps = 0;
		}
		_putchar('\n');
	}
}
