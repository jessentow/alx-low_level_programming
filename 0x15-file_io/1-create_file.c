#include "main.h"

/**
 * create_file - This will read a text file and
 * prints it to the POSIX standard output
 *
 * @filename: This becomes the name of the file to be read
 * @text_content: This NULL terminated string will be written
 * to the file
 *
 * Return: will return 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int writecount1 = 0, writecount2, fp;

	if (!filename)
	return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
	return (-1);

	if (text_content)
	{
	while (text_content[writecount1])
	writecount1++;

	writecount2 = write(fp, text_content, writecount1);
	if (writecount2 != writecount1)
	return (-1);

	}
	close(fp);
	return (1);
}
