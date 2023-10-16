#include "main.h"

/**
 * print_array- Prints n elements of an array of integers followed by a new line
 * @a: Pointer to array
 * @n: number of array elements to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int rep_count;

	for (rep_count = 0; rep_count < n; rep_count++)
	{
		if (rep_count != n - 1)
		{
			printf("%d, ", a[rep_count]);
		}
		else
		{
			printf("%d", a[rep_count]);
		}
	}
	printf("\n");
}
