#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints its own name
 *
 * @argc: Commmand line argument counter
 * @argv: An array of pointers to the command line arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
