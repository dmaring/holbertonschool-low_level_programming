#include "holberton.h"

/**
 * main - writes "Holberton" using external _putchar function
 *
 * Return: On success 0.
 */
int main(void)
{
	char str1[] = "Holberton\n\0";
	int i;

	for (i = 0; str1[i] != '\0'; i++)
		_putchar(str1[i]);
	return (0);
}
