#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime of number n
 *
 * Return: always 0
 */
int main(void)
{
	long maxprime, i;

	unsigned long n = 612852475143;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxprime = i;
			n = n / i;
		}
	}

	if (n > 2)
		maxprime = n;
	else
		maxprime = 2;

	printf("%lu\n", maxprime);

	return (0);
}
