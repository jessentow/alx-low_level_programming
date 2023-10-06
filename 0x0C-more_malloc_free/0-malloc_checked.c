#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This function  allocates memory using malloc
 * @z:This provide the  number of bytes to allocate
 *
 * Return: This returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int z)
{
	void *ptr;

	ptr = malloc(z);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
