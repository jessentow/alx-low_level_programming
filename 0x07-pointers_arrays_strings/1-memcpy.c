#ifndef MAIN_H
#define MAIN_H

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest:memory where it is stored
 * @src: Points to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Adding function prototypes */
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

