#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print a string in a reverse to stdou
 * @s: string to reverse
 *
 */
void print_rev(char *s)
{
	int _strlen(char *s);
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');

}

/**
 * _strlen - finds the length of a given string
 * @s: string input
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);

}
