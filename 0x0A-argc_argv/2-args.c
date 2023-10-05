#include <stdio.h>
#include "main.h"

/**
 * main -This function prints all arguments it receives
 * @argc:The  number of arguments
 * @argv: This is the array of arguments
 *
 * Return: This will Always return 0 as Successful
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}

	return (0);
}
