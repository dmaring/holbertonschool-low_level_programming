#include <stdio.h>

/**
 * main - program that prints its own name
 * @argc: size of arguments passed in argv
 * @argv: vector of pointers to character arguments
 *
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
