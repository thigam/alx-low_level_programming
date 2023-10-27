#include <stdio.h>

/**
 * main- prints every argument passed to it
 *
 * @argc: number of arguments
 * @argv: A pointer to an array of pointers to the
 * command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
