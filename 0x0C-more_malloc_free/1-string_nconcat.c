#include <stdlib.h>
#include "main.h"

/**
 **string_nconcat - concatenates n bytes of a string to another string
 * @s1: first string to append to
 * @s2: Second string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: A pointer to the newly allocated concatenated string,
 *        or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int m = 0, r = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
	length1++;
	while (s2 && s2[length2])
	length2++;

	if (n < length2)
	s = malloc(sizeof(char) * (length1 + n + 1));
	else
	s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
	return (NULL);

	while (m < len1)
	{
	s[m] = s1[m];
	m++;
	}

	while (n < length2 && m < (length1 + n))
	s[m++] = s2[r++];

	while (n >= length2 && i < (length1 + length2))
	s[m++] = s2[r++];

	s[m] = '\0';

	return (s);
}
