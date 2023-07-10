#include "main.h"

/**
 * read_textfile - a function that reads some text from a file
 * @filename: the name of the file to be opened
 * @letters: the amount to read from file
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, fd, fw;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rd = read(fd, buff, letters);
	if (rd < 0)
		return (0);

	fw = write(STDOUT_FILENO, buff, rd);
	if (fw < 0)
		return (0);

	close(fd);
	free(buff);
	return (fw);
}
