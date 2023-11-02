#include "main.h"

/**
 * append_text_to_file - This will append a new text at the end
 * of the file
 *
 * @filename: This is the file to append the text to
 * @text_content: This is the content to append into the file
 *
 * Return:This will return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int writecount1 = 0, writecount2, fp;

	if (!filename)
	return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
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
