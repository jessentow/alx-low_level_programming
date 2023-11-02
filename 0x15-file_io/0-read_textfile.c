#include "main.h"

/**
 * read_textfile - This will read the text file and print it
 * to the POSIX standard output
 *
 * @filename: This becomes the  name of the file that will be read
 * @letters:  The count of letters to read and print
 *
 * Return: This will return the number of letters printed,
 * or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int readcount, writecount;
	int fp;

	if (!filename)
	return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
	return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	return (0);

	readcount = read(fp, buffer, letters);
	if (readcount < 0)
	{
	free(buffer);
	return (0);
	}
	buffer[readcount] = '\0';
	close(fp);

	writecount = write(STDOUT_FILENO, buffer, readcount);
	free(buffer);

	if (writecount < 0)
	return (0);

	return (writecount);
}
