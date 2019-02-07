#include <stdio.h>

/**
 * main - Prints and that piece of art is useful\" - Dora Korpar, 2015-10-19\n
 *
 * Return: 1 if successfulj
 */
int main(void)
{
	char string1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	
	for (i = 0; string1[i] != '\0'; i++)
		putc(string1[i], stderr);
	return (1);
}
