#include <stdio.h>

/**
 * main - print the number of arguments passed to program
 * @argc: number of arguments passed
 * @argv: vector of pointers to string arguments
 *
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc);

	return (0);
}
