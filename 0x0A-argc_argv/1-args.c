#include <stdio.h>

/**
 * main- Prints the number of arguments passed to it
 *
 * @argc: The number of arguments passed
 * @argv: A pointer to an array of pointers to the arguments
 *
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
