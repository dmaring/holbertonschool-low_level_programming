#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers
 * @argc: number of arguments passed in CLI
 * @argv: vector of pointers to string arguments
 *
 * Return: 0 is successul, 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}
