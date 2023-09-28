#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be countered.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lengthofit = 0;

	if (*s)
	{
		lengthofit++;
		lengthofit += _strlen_recursion(s + 1);
	}

	return (lengthofit);
}

