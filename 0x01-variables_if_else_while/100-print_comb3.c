#include <stdio.h>

/**
 * main - Prints number 00 - 99 when the two digits are
 * different and haven't appeared together before
 * Return: 0 if successful
 */
int main(void)
{
	int nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (nums[j] > nums[i])
			{
				putchar(nums[i]);
				putchar(nums[j]);
			}
			if ((nums[i] == '8') && (nums[j] == '9'))
			{
			}
			else if (nums[j] > nums[i])
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
