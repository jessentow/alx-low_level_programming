#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers from min to max
 * @min: The minimum value (inclusive) for the array.
 * @max: The maximum value (inclusive) for the array.
 *
 * Return: The pointer to the new createdarray
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	return (NULL);

	for (a = 0; min <= max; a++)
	ptr[a] = min++;

	return (ptr);
}
