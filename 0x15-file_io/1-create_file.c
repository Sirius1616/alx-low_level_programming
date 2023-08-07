#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: the content of the text
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t fw;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = _strlen(text_content);

	fw = write(fd, text_content, len);
	if (fw == -1)
		return (-1);

	close(fd);

	return (1);
}


/**
 * _strlen - a function that returns the length of a string
 * @s: the string that the length is to be returned
 * Return: always return length when through
 */




int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
