#include "main.h"

/**
 * _isdigit -  This actually checks for a char (0 through 9)
 * @c: The int char to be checked
 * Return: This returns 1 if c is a char, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
