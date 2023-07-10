#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of th file we are creating
 * @text_content: the text we are writting
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		fw = write(fd, text_content, i);

		if (fw < 0)
			return (0);
	}
	close(fd);

	return (1);

}
