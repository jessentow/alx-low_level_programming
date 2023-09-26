#ifndef MAIN_H
#define MAIN_H

/**
 * _memset - Fill the portion of the memory area pointed to by s
 *with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Changed array with a new value to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

#endif /* MAIN_H */
