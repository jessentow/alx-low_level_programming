#include "function_pointers.h"

/**
 * int_index - Searches for an integer using a comparison function
 * @array: The integer array to searvh through
 * @size: The number of element in the array
 * @cmp: A pointer to the comparison function
 * Return: Index of the first element for which the
 *         cmp function does not return 0.
 *        -1 if no element matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (e = 0; e < size; e++)
	{
	if (cmp(array[e]))
	return (e);
	}
	return (-1);
}
