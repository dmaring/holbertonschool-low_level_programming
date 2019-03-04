#include <stdio.h>

/**
 * main - prints all arguments input in CLI
 * @argc: number of arguments input in CLI
 * @argv: vector of pointers to string arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
