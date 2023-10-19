/*
 * File- 4.rev_array.c
 * Auth- Matthew Mwangi
 */

#include "main.h"

/**
 * reverse_array- Reverses the content of an array of integers
 * @a: array containing integers
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int holder, counter;

	for (counter = 0; counter <= n/2; counter++)
	{
		holder = a[n - 1 - counter];
		a[n - 1 - counter] = a[counter];
		a[counter] = a[n - 1 - counter];
	}
}
