#include "main.h"

/*
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: it will return 0 - if big endian,
 *         1 - if little endian
 *
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
