#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * main- copies the content of a file to another file
 * @ac: number of command line arguments
 * @av: a pointer to an array of pointers to command line arguments
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, close_ret_1, close_ret_2;
	ssize_t number, write_return;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit (98);
	}

	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	while ((number = read(fd_from, buff, 1024)) > 0)
	{
		write_return = write(fd_to, buff, number);
		if (write_return == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf (2, "can't write to %s\n", av[2]);
			exit (99);
		}
	}

	if (number == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit (98);
	}

	close_ret_1 = close(fd_from);
	close_ret_2 = close(fd_to);

	if (close_ret_1 == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close_ret_2 == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

