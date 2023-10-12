#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The integer array to iterate through.
 * @size: The size of the array.
 * @action: A pointer to the function to apply to each element.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	return;

	for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
}
