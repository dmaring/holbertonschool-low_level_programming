#include "holberton.h"

/**
 * jack_bauer - print every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i > 2)
						break;
					if ((i > 1) && (j > 3))
						break;
					if (k > 5)
						break;
					if (l > 9)
						break;

					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
