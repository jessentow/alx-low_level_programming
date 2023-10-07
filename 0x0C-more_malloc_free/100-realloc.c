#include <stdlib.h>
#include "main.h"

 /*
 * _realloc : This reallocates a memory block.
 * *_realloc: This reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: The size, in bytes, of the allocated space
 * for ptr.
 * @new_size: The new size, in bytes, of the memory block.
 *
 * Return: A pointer to the newly allocated memory block,
 *         or NULL on failure or if new_size is zero.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{

	char *ptr1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0 && ptr)
	{
	free(ptr);
	return (NULL);
	}

	if (!ptr)
	return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
	return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
	for (a = 0; a < new_size; a++)
	ptr1[a] = old_ptr[a];
	}

	if (new_size > old_size)
	{
	for (a = 0; a < old_size; a++)
	ptr1[a] = old_ptr[a];
	}

	free(ptr);
	return (ptr1);
}
