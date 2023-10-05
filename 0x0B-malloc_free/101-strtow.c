#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words in the string
 **/

int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (c = 0; s[a] != '\0'; a++)
	{
	if (s[a] == ' ')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	b++;
	}
	}
	return (b);
}

/**
 * **strtow - divides a string into words
 * @str: string to divide
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int o, p = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	return (NULL);

	for (o = 0; o <= len; o++)
	{
	if (str[o] == ' ' || str[o] == '\0')
	{
	if (a)
	{
	end = o;

	tmp = (char *) malloc(sizeof(char) * (a + 1));
	if (tmp == NUL)
	return (NULL);
	while (start < end)
		*tmp++ = str[start++];
																																														*tmp = '\0';
																																														matrix[p] = tmp - a;
																																														p++;
																																														a = 0;															}
	}
	else if (a++ == 0)
		start = o
	}

	matrix[p] = NULL;

	return (matrix);
}
