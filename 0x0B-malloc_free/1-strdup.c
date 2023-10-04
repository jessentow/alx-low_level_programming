#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing a copy of the input string.
 *         Returns NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *abc;
	int i, s = 0;

	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
	return (NULL);

	for (s = 0; str[s]; s++)
	abc[s] = str[s];
	return (abc);
}
