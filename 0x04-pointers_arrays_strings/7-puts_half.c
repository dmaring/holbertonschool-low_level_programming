#include "holberton.h"

/**
 * puts_half - prints half the characters of a string
 * @str: input string
 *
 */
void puts_half(char *str)
{
	int _strlen(char *s);
	int i, len;

	len = _strlen(str);
	if (len % 2 == 0)
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	else
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	_putchar('\n');
}
/**
 * _strlen - find and return the length of a string
 * @s: string input
 *
 * Return: return the number of items in a character array
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
