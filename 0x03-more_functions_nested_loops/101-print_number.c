#include "holberton.h"

/**
 * print_number - print any integer with _putchar()
 * @n: input number to print
 *
 */
void print_number(int n)
{
	 signed long m = n;

	 if (m < 0)
	 {
		 _putchar('-');
		 m = -m;
	 }

	 if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
