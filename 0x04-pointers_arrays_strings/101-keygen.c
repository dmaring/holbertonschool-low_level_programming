#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate a random key for 101-crackme program
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	srand(time(0));

	for (i = 0; i < 12; i++)
		printf("%c", rand() % 93 + '!');

	return (0);
}
