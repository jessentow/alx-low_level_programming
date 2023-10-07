#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_memset - This fills memory with a constant byte
 * @s: This is the  memory area to be filled
 * @b: The character string to copy
 * @n: The number of times to copy b
 *
 * Return: This will return pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
									}

	return (s);
}

/**
 * *_calloc - This allocates memory for an array
 * @nmemb: This becomes number of elements in the array
 * @size: The size of each element
 *
 * Return: The pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
