#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the addition of all paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum.
 * Return: Sum items, or fail otherwise
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list items;
	unsigned int a;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(items, n);

	for (a = 0; a < n; a++)
	sum += va_arg(items, int);

	va_end(items);

	return (sum);
}
