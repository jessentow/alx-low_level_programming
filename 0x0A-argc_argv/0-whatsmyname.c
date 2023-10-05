#include <stdio.h>
#include "main.h"

/**
 * main - This function  prints the name of the program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: This will Always return 0 as Successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
