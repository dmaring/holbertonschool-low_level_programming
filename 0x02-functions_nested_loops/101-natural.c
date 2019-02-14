#include <stdio.h>
#include "holberton.h"

/**
 * main - prints sum of all numbers under 1024 divisible by 3 and 5
 *
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 || i % 5)
			sum += i;
	}
	printf("%i\n", sum);
}
