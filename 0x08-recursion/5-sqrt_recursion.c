#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - This actually returns the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * Return: The natural square root of n, or -1 if n
 * does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Helper function to calculate the
 * square root using recursion recurses
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: The answer or resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

