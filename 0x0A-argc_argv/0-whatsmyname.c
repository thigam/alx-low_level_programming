#include <stdio.h>
#include <stdlib.h>

/**
 * whatsmyname- Prints its own name
 *
 * @argc: Commmand line argument counter
 * @argv: An array of pointers to the command line arguments
 *
 * Return: 0
 */

int main(int argc, char  *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
