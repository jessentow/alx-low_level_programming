#include "main.h"

/**
 * print_binary - This will prints the binary type
 * of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int number = 0;
	unsigned long int avail = n;

	while (avail)
	{
	avail = avail >> 1;
	number++;
	}

	if (!number)
	putchar('0');

	while (number)
	{
	avail = n >> --avail;
	if (avail & 1)
	putchar('1');
	else
	putchar('0');
	}
}
