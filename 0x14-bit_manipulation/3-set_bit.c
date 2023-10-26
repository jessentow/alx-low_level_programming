#include "main.h"

/**
 * set_bit - This finds the value of a bit at a given index.
 * @n: The decimal number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: This returns the value of a bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	return (-1);
	*n = *n | (1 << index);

	return (1);
}
