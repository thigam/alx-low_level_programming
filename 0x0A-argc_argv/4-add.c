#include <stdio.h>

/**
 * main- Adds numbers and prints sum
 *
 * @argc: Number of command line arguments
 * @argv: A pointer to an array of pointers to
 * command line arguments
 *
 * Return: 1 incase of an erro, 0 if successful or if no arguments are passed
 */

int main(int argc, char *argv[])
{
	int counter_n, counter_d, sum = 0;

	for (counter_n = 0; counter_d < argc; counter_d++)
	{
		for (counter_d = 0; argv[counter_n][counter_d]; counter_d)
		{
			if (argv[counter_n][counter_d] < '0' || argv[counter_n][counter_d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[counter_n]);
	}
	printf("%d\n", sum);
	return (0);
}
