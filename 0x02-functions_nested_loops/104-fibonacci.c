#include <stdio.h>
#include <stdint.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 3;

	printf("1, 2, ");
	for (i = 3; i <= 98; i++)
	{
		printf("%lu", c);
		a = b;
		b = c;
		c = a + b;

		if (i < 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
