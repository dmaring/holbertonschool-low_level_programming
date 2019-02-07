#include <stdio.h>

/**
 * main - Prints lowercase characters of base 16 using putchar()
 *
 * Return: 0 if successful
 */
int main(void)
{
	char bs16[] = "0123456789abcdef\0";
	int i;

	for (i = 0; bs16[i] != '\0'; i++)
		putchar(bs16[i]);
	putchar('\n');

	return (0);
}
