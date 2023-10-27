#include <stdio.h>
#include <stdlib.h>

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
	int num = atoi(argv[1]), num2 = atoi(argv[2]), times;

	times = num * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", times);
	return (0);
}
