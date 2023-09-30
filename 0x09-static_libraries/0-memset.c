#include "main.h"
/**
 * _memset - This pointer fill a block of memory with a specific value
 * @s: The pointer to starting address of memory to be filled
 * @b: This is the desired value
 * @n: number of bytes to be changed
 * Return: This returns the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
