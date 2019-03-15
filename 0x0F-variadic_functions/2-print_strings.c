#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string separator between strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	/** create variable of type va_list **/
	va_list argList;

	/** initialize argList pointer using va_start **/
	va_start(argList, n);

	/** loop through and print arguments and separator **/
	for (i = 0; i < n; i++)
	{
		/** if not pointer not NULL **/
		if (argList)
			printf("%s", (va_arg(argList, char *)));
		else
			printf("(nil)");
		/** if separator not NULL and argument is not last arg **/
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(argList);
}
