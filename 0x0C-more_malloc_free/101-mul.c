#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - This function checks if a string contains
 * a non-digit character
 * @s: This string to be checked
 *
 * Return: 0 if a non-digit is found, otherwise returns 1
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
	if (s[a] < '0' || s[a] > '9')
	return (0);
	a++;
	}
	return (1);
}

/**
 * _strlen -This returns the length of a string
 * @s: string to be checked
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	return (a);
}

/**
 * errors - This function will handle errors for main
 *
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:This will return 0 as always Successful.
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, z, takey, d1, d2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
	return (1);
	for (z = 0; z <= len1 + len2; z++)
	result[z] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
	d1 = s1[len1] - '0';
	takey = 0;
	for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
	{
	d2 = s2[len2] - '0';
	takey += result[len1 + len2 + 1] + (d1 * d2);
	result[len1 + len2 + 1] = takey % 10;
	takey /= 10;
	}
	if (takey > 0)
	result[len1 + len2 + 1] += takey;
	}
	for (z = 0; z < len - 1; z++)
	{
	if (result[z])
	a = 1;
	if (a)
	_putchar(result[z] + '0');
	}
	if (!a)
	_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
