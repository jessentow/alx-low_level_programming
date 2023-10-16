#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * @...: A variable number of strings to be printed.
 */

void print_all(const char * const format, ...)
{
	va_list Items;
	int b = 0;
	char *str, *sep = "";

	va_start(Items, format);
	if (format)
	{
	while (format[b])
	{
	switch (format[b])
	{
	case 'c':
	printf("%s%c", sep, va_arg(Items, int));
	break;
	case 'i':
	printf("%s%d", sep, va_arg(Items, int));
	break;

	case 'f':
	printf("%s%f", sep, va_arg(Items, double));
	break;
	case 's':
	str = va_arg(Items, char *);
	if (!str)
	str = "(nil)";
	printf("%s%s", sep, str);
	break;
	default:
	b++;
	continue;
	}
	sep = ", ";
	b++;
	}
		}
	va_end(Items);
	printf("\n");
}
