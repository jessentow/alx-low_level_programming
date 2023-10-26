#include "main.h"

/*
 * flip_bits - find number of bits you would need to flip
 *  to get the 2nd number from the first number to another
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number  of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count_flips = 0;

	while (n)
	{
	if ((n & 1) != (m & 1))
	count_flips++;
	n = n >> 1;
	m = m >> 1;
	}
	return (count_flips);
}
