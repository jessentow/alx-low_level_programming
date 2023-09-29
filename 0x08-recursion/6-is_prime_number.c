#include "main.h"
#include <stdio.h>

int real_prime(int n, int r);

/**
 * is_prime_number - Check if the number is prime or not.
 * @n: The number or integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise or not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - Checks if the number is prime recursively
 * @n: The number or integer to be evaluate
 * @r: The iterator
 *
 * Return: 1 if n is prime, 0 otherwise or not
 */
int real_prime(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (real_prime(n, r - 1));
}
