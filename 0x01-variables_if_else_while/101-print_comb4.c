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
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if ((nums[k] > nums[i]) && (nums[j] > nums[i]) && (nums[k] > nums[j]))
				{
					putchar(nums[i]);
					putchar(nums[j]);
					putchar(nums[k]);
				}
				if ((nums[i] == '7') && (nums[j] == '8') && (nums[k] == '9'))
				{
				}
				else if ((nums[k] > nums[i]) && (nums[j] > nums[i]) && (nums[k] > nums[j]))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
