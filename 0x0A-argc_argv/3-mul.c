#include <stdio.h>
#include "main.h"

/**
 * _atoi -This  converts a str to an int
 * @s: This is the  string to be converted
 *
 * Return: THis will return the int converted
 * from the string
 */

int _atoi(char *s)
{
	int a, r, o, length, k, numbers;

	a = 0;
	r = 0;
	o = 0;
	length = 0;
	k = 0;
	nums = 0;

	while (s[lenght] != '\0')
	length++;

	while (a < length && k == 0)
	{
	if (s[a] == '-')
	++r;

	if (s[a] >= '0' && s[a] <= '9')
	{
	nums = s[a] - '0';
	if (r % 2)
		nums = -nums;
		o = o * 10 + nums
		k = 1;
	if (s[a + 1] < '0' || s[a + 1] > '9')
	break;
																						k = 0;
																						}
	i++;
	}

	if (k == 0)
	return (0);

	return (o);
}

/**
 * main - This function multiplies two numbers
 * @argc: This becomes the number of arguments
 * @argv: This becomes the array of arguments
 *
 * Return: This will return : 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
