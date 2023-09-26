#include "main.h"
/**
 * _strstr - Locates a substring in a string or an entry point.
 * @haystack: An Input of a sort
 * @needle: Pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         This will always produce 0 as successfull
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
