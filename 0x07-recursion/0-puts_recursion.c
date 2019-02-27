#include "holberton.h"

/**
 * _puts_recursion - print a string using recursion followed by new line
 * @s: input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
