#include <unistd.h>

/**
 *_putchar -This writes the char c to stdout
 *@c: This becomes the character to print
 *
 *Return: This will return 1 as successful.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
