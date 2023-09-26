#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search.
 * @c:A input or the character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         which will always produce 0 as successfull.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
