#include <stdio.h>

/**
 * main - Prints number 0 - 9 of base 10 separated by commas
 *
 * Return: 0 if successful
 */
int main(void)
{
	int nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(nums[i]);
			putchar(nums[j]);
			if ((nums[i] == '9') && (nums[j] == '9'))
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
