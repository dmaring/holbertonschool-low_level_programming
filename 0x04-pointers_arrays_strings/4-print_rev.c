#include "holberton.h"

/**
 * print_rev - print a string in a reverse to stdou
 * @s: string to reverse
 *
 */
void print_rev(char *s)
{
	int _strlen(char *s);
	int i;

	for (i = _strlen(s) + 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');

}

/**
 * _strlen - finds the length of a given string
 * @s: string input
 *
 * Return: lenght of a string preceding NUL character '\0'
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);

}
