#include "variadic_functions.h"

/**
 * print_all - function that prints everything
 * @format: constant pointer to constant string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list argList;
	va_list listCopy;
	/** initialize argList with arg_start **/
	va_start(argList, format);
	/** loop through format string **/
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case ('c'):
			printf("%c", va_arg(argList, int));
			break;
		case ('i'):
			printf("%i", va_arg(argList, int));
			break;
		case ('f'):
			printf("%f", va_arg(argList, double));
			break;
		case ('s'):
			va_copy(listCopy, argList);
			if (va_arg(listCopy, char *))
				printf("%s", va_arg(argList, char *));
			else
				printf("(nil)");
			va_end(listCopy);
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(argList);
}
