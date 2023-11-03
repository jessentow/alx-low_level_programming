#include "main.h"

/**
 * print_error - This will  print file close error.
 * @file_des: The file descriptor
 *
 * Return:This returns nothing.
 */

void print_error(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}

/**
 * main -This will  copy the content of a file
 * to another file.
 * @argc:The number of command line arguments
 * @argv: This is An array containing the program
 * command line arguments
 * Return:This will always return success.
 */
int main(int argc, char *argv[])
{
	int filep_from, filep_to, wordcount;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	filep_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || filep_from < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98); }

	filep_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (filep_to < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(filep_from);
	exit(99); }
	while ((wordcount = read(filep_from, buffer, 1024)) > 0)
	{
	if (wordcount != write(filep_to, buffer, wordcount))
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(filep_from);
	close(filep_to);
	exit(99);
	}
	}
	if (wordcount < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (close(filep_from) < 0)
	print_error(filep_from);
	if (close(filep_to) < 0)
	print_error(filep_to);
	return (0);
}
