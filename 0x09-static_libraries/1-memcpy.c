#include "main.h"

/**
 *_memcpy - This is the  function that copies memory area
 *@dest: The pointer to memory wher it is stored
 *@src: The memory where it is copied
 *@n: The number of bytes
 *Return: This returns the copied memory with n bytes changed
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
	dest[a] = src[b];
	n--;
	}
	return (dest);
}
