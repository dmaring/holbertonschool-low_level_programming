#include <stdio.h>
#include <string.h>

/**
 * main - Prints lowercase letters of the alphabet in reverse using putchar()
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alpha[] = "zyxwvutsrqponmlkjihgfedcba\0";
	int i;

	for (i = 0; alpha[i] != '\0'; i++)
		putchar(alpha[i]);
	putchar('\n');

	return (0);
}
