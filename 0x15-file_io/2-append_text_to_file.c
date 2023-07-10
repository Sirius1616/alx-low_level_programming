#include "main.h"

/**
 * append_text_to_file - a function that appends text to a file
 * @filename: the name of the file
 * @text_content: the text we are appending
 * Return:(-1) on failure and (1) on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fr, i;

	fd = open(filename, O_APPEND | O_RDWR, 0664);

	if (fd < 0)
		return (-1);


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		fr = write(fd, text_content, i);
		if (fr < 0)
			return (-1);
	}
	close(fd);
	return (1);

}
