#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -This will  prints the numbers,
 *                followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: This becomes the number of integers passed to the function.
 *
 * Return: This returns nothing
 * @...: A variable number of numbers to be printed.
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list items;
	unsigned int a;

	if (n != 0)
	{
	va_start(items, n);

	for (a = 0; a < n - 1; a++)
	{
	printf("%d", va_arg(items, int));

	if (separator)
	printf("%s", separator);
	}
	printf("%d", va_arg(items, int));
	va_end(items);
	}

	printf("\n");
}
