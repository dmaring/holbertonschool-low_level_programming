#include "holberton.h"

/**
 * times_table - print the times tables with number 0 - 9
 */
void print_times_table(int n)
{
	int i, j, sum, k, l, m;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			sum = i * j;
			l = sum % 10;
			k = (sum / 10) % 10;
			m = (sum / 100) % 100;

			if (((i == 0) && (j == 0)) || ((i != 0) && (j == 0)))
			{
				_putchar(k + '0');
			}
			else if (sum <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			}
			if ((sum >= 10) && (sum < 100))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(l + '0');
			}
			else if (sum > 100)
			{
				_putchar(' ');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar(m + '0');
			}
			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
