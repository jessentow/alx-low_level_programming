#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks whether if a string is a palindrome
 * @s: The input string to reverse or checked
 *
 * Return: 1 if it is a string, 0 it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of the string
 * @s: string to check the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks the char  recursively for palindrome
 * @s: string to check
 * @r: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int r, int length)
{
	if (*(s + r) != *(s + length - 1))
		return (0);
	if (r >= length)
		return (1);
	return (check_palindrome(s, r + 1, length - 1));
}
