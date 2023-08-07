#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * @filename : the name of the file to be read
 * @letters : the letters to be read
 * Return: 1 on successs 0 on failure
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fr, fw;
	char *buffer;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fr = read(fd, buffer, letters);
	if (fr == -1)
		return (0);

	fw = write(STDOUT_FILENO, buffer, letters);

	if (fw == -1)
		return (0);
	close(fd);

	return (fw);
}
