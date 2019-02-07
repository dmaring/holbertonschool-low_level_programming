#include <stdio.h>

/**
 * main - Prints number 0 - 9 of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	char nums[] = "0123456789\n\0";
	int i;

	for (i = 0; nums[i] != '\0'; i++)
		putchar(nums[i]);

	return (0);
}
