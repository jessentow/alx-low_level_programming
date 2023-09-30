#include "main.h"
/**
 *_isupper - Uppercase letters within
 * @c:This is the character to check
 *
 *Return: This function will return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
