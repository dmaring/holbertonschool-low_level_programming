#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether random number generated is < 5, != 0, or <6 && !=0
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of n is %d and is greater than 5", n);
	else if (n == 0)
		printf("Last digit of n is %d and is 0", n);
	else if ((n < 6) && (n != 0))
		printf("Last didit of n is %d and is less than 6 and not 0")

	return (0);
}
