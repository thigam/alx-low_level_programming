#include "function_pointers.h"

/**
 * array_iterator- Executes a function given as a
 * parameter for each element of an array
 *
 * @array: the array
 * @size: The size of the array
 * @action: A pointer to the function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int counter;

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
