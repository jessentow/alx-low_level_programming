#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks the string if there are digit
 * @str: This is the array of  str
 *
 * Return: This will  Alwaysreturn  0 as Successful
 */

int check_num(char *str)
{
	unsigned int numbered;

	numbered = 0;
	while (numbered < strlen(str))

	{
	if (!isdigit(str[numbered]))
	{
	return (0);
	}

	numbered++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int numbered;
	int str_to_int;
	int sum = 0;

	numbered = 1;
	while (numbered < argc)
	{
	if (check_num(argv[numbered]))

	{
	str_to_int = atoi(argv[numbered]);
	sum += str_to_int;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	numbered++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
