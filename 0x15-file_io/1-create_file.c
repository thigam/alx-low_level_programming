#include "main.h"

/**
 * create_file- Creates a file
 * @filename: path and name of file
 * @text_content: contents for the new file
 *
 * Return: 1 on success. -1 if anything fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_return;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_return = write(fd, text_content, strlen(text_content));
	if (write_return == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
