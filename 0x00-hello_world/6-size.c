#include <stdio.h>

/**
 * main - Prints out various type sizes for the machine
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	char c;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %i byte(s)\n", (int) sizeof(c));
	printf("Size of an int: %i byte(s)\n", (int) sizeof(i));
	printf("Size of a long int: %i byte(s)\n", (int) sizeof(l));
	printf("Size of a long long int: %i byte(s)\n", (int) sizeof(ll));
	printf("Size of a foat: %i byte(s)\n", (int) sizeof(f));

	return (0);
}
