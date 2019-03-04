#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: number of passed arguments
 * @argv: vector of pointers to string arguments
 *
 * Return: 0 if successful, 1 if Error occurs
 */
int main(int argc, char *argv[])
{
	int i, j, sum;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%i\n", sum);

	return (0);
}
