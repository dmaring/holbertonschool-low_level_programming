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
	int flag;

	va_start(argList, format);
	while (format[i])
	{
		switch (format[i])
		{
		case ('c'):
			printf("%c", va_arg(argList, int));
			flag = 1;
			break;
		case ('i'):
			printf("%i", va_arg(argList, int));
			flag = 1;
			break;
		case ('f'):
			printf("%f", va_arg(argList, double));
			flag = 1;
			break;
		case ('s'):
			va_copy(listCopy, argList);
			if (va_arg(listCopy, char *))
			{
				printf("%s", va_arg(argList, char *));
				break;
			}
			printf("(nil)");
			flag = 1;
			break;
		default:
			flag = 0;
		}
		if (format[i + 1] && flag)
			printf(", ");
		i++;
	}
	printf("\n");
}
