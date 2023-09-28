#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Calculates x raised to the power of y
 * @x: The base or the value that has to raise the power
 * @y: The raise power or exponent
 *
 * Return: The result of the calculation x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
