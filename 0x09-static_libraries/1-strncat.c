#include "main.h"

/**
 * _strncat -This concatenate two strings
 * using at most n bytes from src
 * @dest: This is the input value
 * @src: This is input value
 * @n: This is input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
	a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
