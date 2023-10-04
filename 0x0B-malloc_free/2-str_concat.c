#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string.
 *         Returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, conci;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	i = conci = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[conci] != '\0')
	conci++;
	conct = malloc(sizeof(char) * (i + conci + 1));

	if (conct == NULL)
	return (NULL);
	i = conci = 0;
	while (s1[i] != '\0')
	{
	conct[i] = s1[i];
	i++;
	}

	while (s2[conci] != '\0')
	{
	conct[i] = s2[conci];
	i++, conci++;
																					}
	conct[i] = '\0';
	return (conct);
}
