#include <stdio.h>
#include "main.h"

/**
 * main -This program will  print the number of
 * arguments passed to the program
 * @argc:The number of arguments
 * @argv:The  array of arguments
 *
 * Return: This will Always return 0 as Successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
