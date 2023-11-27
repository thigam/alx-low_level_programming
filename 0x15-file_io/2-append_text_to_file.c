#include "main.h"

/**
 * append_text_to_file- Appends text at the end of a file
 * @filename: the file
 * @text_content: the text
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_return;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_return = write(fd, text_content, sizeof(text_content) / sizeof(char *));

	if (write_return == -1)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
