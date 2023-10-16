#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This will print the  strings,
 *                 followed by a new line.
 *@...: A variable number of strings to be printed
 * @separator: This is the string to be printed
 *             between strings.
 * @n: This becomes the number of strings passed.
 *
 * Return: This will return nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strItems;
	unsigned int a;
	char *str;

	va_start(strItems, n);
	for (a = 0; a < n; a++)
	{
	str = va_arg(strItems, char*);
	if (str)
	printf("%s", str);
	else
	printf("(nil)");
	if (separator && a < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(strItems);
}
