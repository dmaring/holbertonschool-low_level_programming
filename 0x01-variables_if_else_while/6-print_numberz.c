#include <stdio.h>

/**
 * main - Prints number 0 - 9 of base 10 without using type char
 *
 * Return: 0 if successful
 */
int main(void)
{
	int nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0; i < 10; i++)
		putchar(nums[i]);
	putchar('\n');

	return (0);
}
