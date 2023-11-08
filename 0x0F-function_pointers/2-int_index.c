#include "function_pointers.h"

/**
 * int_index- Searches for an integer
 * @array: pointer to an array containing
 * integers
 * @cmp: Pointer to function that compares
 * Return: -1 if no element matches or if size
 * <= 0, otherwise the index of the first element
 * for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
	}

	return (-1);
}
