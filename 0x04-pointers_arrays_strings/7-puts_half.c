#include "holberton.h"

/**
 * puts_half(char *str)
 * @str: input string
 *
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) == 0)
		i = (len / 2);
	else
		i = ((len - 1) / 2);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
