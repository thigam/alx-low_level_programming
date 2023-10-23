#include "main.h"

/**
 * print_diagsums- Prints the sum of two diagonals of
 * a square matrix of integers
 *
 * @a: The square matrix
 * @size: The size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int main_diag, minor_diag, main_sum, minor_sum;

	main_diag = 0;
	minor_diag = size - 1;
	main_sum = 0;
	minor_sum = 0;

	while (main_diag <= (size * size))
	{
		main_sum += a[main_diag];
		main_diag = main_diag + size + 1;
	}

	while (minor_diag < (size * size - 1))
	{
		minor_sum = minor_sum + a[minor_diag];
		minor_diag = minor_diag + size - 1;
	}

	printf("%d, %d\n", main_sum, minor_sum);
}
