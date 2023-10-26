#include "main.h"

/**
 * print_binary - This will prints the binary type
 * of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int a = 0;
	unsigned long int e = n;

	while (e)
	{
	e = e >> 1;
	a++;
	}

	if (!a)
	putchar('0');

	while (a)
	{
	e = n >> --a;
	if (e & 1)
	putchar('1');
	else
	putchar('0');
	}
}
