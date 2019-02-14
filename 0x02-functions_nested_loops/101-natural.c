#include <stdio.h>

/**
 * main - prints sum of all numbers under 1024 divisible by 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%i\n", sum);

	return (0);
}
