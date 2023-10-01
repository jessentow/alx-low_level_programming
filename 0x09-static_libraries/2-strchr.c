#include "main.h"

/**
 * _strchr - Entry point
 * @s:The is a pointer for input value
 * @c: This is a pointer for input
 * Return: Always produce 0 as Successful
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
	return (&s[a]);
	}
	return (0);
}
