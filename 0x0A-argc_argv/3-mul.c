#include <stdio.h>

/**
 * main- multiplies tow integers and prints the result
 *
 * @argc: number of command line arguments
 * @argv: A pointer to an array of pointers to the command
 * line arguments
 *
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	return (argv[1] * argv[2]);
}
