#include "holberton.h"

/**
 * print_number - print any integer with _putchar()
 * @n: input number to print
 *
 */
void print_number(int n)
{
	 if (n < 0)
	 {
		 _putchar('-');
		 n = -n;
	 }

	 if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
