#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
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
	for (i = 0; i <= 50; i++)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;

		if (i != 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
