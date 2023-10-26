#include "main.h"

/*
 * clear_bit - This function int finds  the value of
 * a bit at a given index
 * @n:The decimal number
 * @index: index starting from 0 of the bit you want to get
 *
 * Description : This clear_bit function finds the value of
 * a bit at a given index
 *
 * Return: Thsi will return the value of a bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
