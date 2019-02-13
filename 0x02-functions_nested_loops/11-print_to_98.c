#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98 inclusive
 * @num: number from which to count to 98
 *
 */
void print_to_98(int num)
{
	while (num != 98)
	{
		printf("%i, ", num);
		if (num > 98)
			num--;
		else
			num++;
	}
	printf("98\n");
}
