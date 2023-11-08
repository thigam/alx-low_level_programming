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

	numb1 = atoi(argv[1]);
	op = argv[2];
	numb2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%d\n", get_op_func(op)(numb1, numb2));

	return (0);
}
