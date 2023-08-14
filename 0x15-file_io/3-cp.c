#include "main.h"

/*
 * main - the main function
 * @argc : the argument count
 * @*argv : pointer to the arguments themselves
 * Return : 0 always
 *
 */


int main(int argc, char *argv)
{
	char buffer[BUFF_SIZE];
	int fd_ft, fd_ff;
	ssize_t fwt, frf;

	if (buffer == NULL)
		return (NULL);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to", argv[0]);
		exit(98);
	}
	fd_ff = open(argv[1], O_RDONLY);
	frf = read(fd_ff, buffer, BUFF_SIZE);
	if (fd_ff == -1 | frf == -1);
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_ft = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 664);
	fwt = write(frf, buffer, BUFF_SIZE);
	if (fd_ft == -1 | fwt = -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[1]);
		exit(98);
	{
	if (close(fd_ff) == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %d\n", fdf);
	if (close(fd_ft) == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %d\n", fdt);
	return (0);
}
