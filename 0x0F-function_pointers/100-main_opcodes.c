#include <stdio.h>
#include <stdlib.h>

/**
 * main - This will print its own opcodes
 * @argc: This is number of arguments
 * @argv: This is the  array of arguments
 *
 * Return: This will always return  0 as Successful
 */
int main(int argc, char *argv[])
{
	int bytes, e;
	char *arr;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	arr = (char *)main;

	for (e = 0; e < bytes; e++)
	{
	if (e == bytes - 1)
	{
	printf("%02hhx\n", arr[e]);
	break;															}
	printf("%02hhx ", arr[e]);
	}
	return (0);
}
