#include "main.h"

/**
 * swap_int- Swaps the values of two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
