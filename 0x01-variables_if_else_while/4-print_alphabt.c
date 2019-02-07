#include <stdio.h>

/**
 * main - Prints lowercase letters of the alphabet using putchar()
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz\n\0";
	int i;

	for (i = 0; alpha[i] != '\0'; i++)
		putchar(alpha[i]);

	return (0);
}
