#include "main.h"

/*
 * get_endianness - this will check for the endianness
 *
 * Return: it will return 0 - if big endian,
 *         1 - if little endian
 *
 * Description: In big endian format the most significant byte
 *	is stored earliest, thus gets stored at the
 *	latest address byte, while in little endian format
 *	the least significant byte is stored first.
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
