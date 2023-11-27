#include "main.h"

/**
 * read_textfile- Reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters to be read
 *
 * Return: 0 if file cannot be opened or read,
 * if filename is NULL or if write fails or does not write the expectes number of byte.
 * Otherwise, returns the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	size_t numb_read, numb_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, letters);

	if (fd == -1)
		return (0);

	buff = malloc(letters);

	if (buff == NULL)
	{
		close (fd);
		return (0);
	}

	numb_read = read(fd, buff, letters);

	if (numb_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	numb_write = write(STDOUT_FILENO, buff, numb_read);

	free(buff);
	close(fd);

	if (numb_write == -1)
		return (0);

	return (numb_write);
}
