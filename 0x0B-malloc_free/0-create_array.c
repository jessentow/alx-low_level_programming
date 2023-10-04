#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of char and initialize
 * it with a specific char C
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array or NULL if fail.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
}
