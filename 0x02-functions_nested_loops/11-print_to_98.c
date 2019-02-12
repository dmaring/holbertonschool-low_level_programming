#include "holberton.h"

/**
 * print_to_98 - print numbers from n to 98 inclusive
 * @num: number from which to count to 98
 *
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		for (; num <= 98; num++)
		{
			int i, j;

			j = num % 10;
			i = (num / 10) % 10;

			if (num < 10)
				_putchar(j + '0');
			else if (num > 10)
			{
				_putchar(i + '0');
				_putchar(j + '0');
			}
			if (num != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (num > 98)
	{
		for (; num >= 98; num--)
		{
			int i, j, k;

			k = num % 10;
			j = (num / 10) % 10;
			i = (num / 100) % 10;

			if (num > 100)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(k + '0');
			}
			else if (num < 100)
			{
				_putchar(j + '0');
				_putchar(k + '0');
			}
			if (num != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (num == 98)
	{
		_putchar('0' + 9);
		_putchar('0' + 8);
		_putchar('\n');
	}
}
