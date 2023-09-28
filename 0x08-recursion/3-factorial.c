#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a number
 * @n: The input number that will enable  calculatioin of the factorial
 *
 * Return: The factorial of n, or -1 if n is negative (which will be an error).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
