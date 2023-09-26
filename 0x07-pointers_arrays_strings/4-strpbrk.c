#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: An Input Pointer
 *
 * Return: Would always produce 0 (Successful)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
