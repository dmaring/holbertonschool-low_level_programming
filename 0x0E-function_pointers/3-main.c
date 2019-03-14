#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculator program
 * @argc: number of arguments passed to cli
 * @argv: vector of pointers to arguments passed to cli
 *
 * Return: 0 if successful, -1 if error
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", ptr(a, b));

	return (0);
}
