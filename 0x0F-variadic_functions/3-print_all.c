#include <stdarg.h>
#include <stdio.h>
#include "variadic_function.h"

/**
 * print_all - function that prints everything
 * @format: constant pointer to constant string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int argLength = 0;
	int i = 0; j = 0; k = 0; length = 0;
	char *formatter;

	struct fStruct
	{
		char fAbbrev;
		char *fFull;
	}

	struct fStruct[] =
	{
		{'c', "char"},
		{'i', "int"},
		{'f', "float"},
		{'s', "char *"}
	}
		
	/** loop format to check for c, i, f, s and get length **/
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' \
		    || format[i] == 'f' || format[i] == 's')
			length++;
		i++;
	}
			
	/** declare list of type va_list **/
	va_list argList;

	/** initialize list using the index of format for the format **/
	va_start(argList, length);

	/** loop through argList and use printf format specifier **/
	j = 0;
	k = 0;
	while (j < length)
	{
		/** if argument is NULL print (nil)
		 and advance both counters**/
		
		
		/** else if formatter is in struct list **/
		// print the argument with the formatter
		// advance the both counters
		if (format[k] == fStruct[j].fAbbrev)
		{
			printf("%*", format[k], fStruct[j].fFull)
			
			j++;
			k++;
		}

		/** else advance format counter and not argument counter **/
		    

		 
	}
