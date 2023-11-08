#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- Prints the result of certain arithmetic
 * operations
 * @argc: Number of command line arguments
 * @argv: A pointer to an array of pointers
 * containing the command line arguments
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numb1, numb2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != "+" && argv[2] != "-" &&
			argv[2] != "*" &&
			argv[2] != "/" &&
			argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2] == "/" || argv[2] == "%" &&
			argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[3]);
	op = argv[2];

	printf("%d\n", get_op_func(op)(numb1, numb2));

	return (0);
}
