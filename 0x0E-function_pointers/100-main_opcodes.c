#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints opcodes
 * @argc: number of arguments passed at cli
 * @argv: vector of pointers to arguments passed at cli
 *
 * Return: void
 */
void main(int argc, char *argv[])
{
	int bytes;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	
	
	
}

 If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
