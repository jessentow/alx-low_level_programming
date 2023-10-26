#include "main.h"

/**
 * binary_to_uint - This will convert a binary number to unsigned int
 *
 * @b: This is a string containing the binary number
 *
 * Return: This will return the decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int deci = 0;

	if (b == NULL)
	return (0);

	for (a = 0; b[a] != '\0'; ++a)
	{
	if (b[a] != '0' && b[a] != '1')
	return (0);
	deci = 2 * deci + (b[a] - '0');
	}

	return (deci);
}
