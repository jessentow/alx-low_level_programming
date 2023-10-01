#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest:This is a pointer for input value
 * @src: This is a pointer fo input value
 * @n: input value
 *
 * Return: This returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[b] = src[b];
	b++;
	}
	while (b < n)
	{
	dest[b] = '\0';
	b++;
	}
	return (dest);
}
