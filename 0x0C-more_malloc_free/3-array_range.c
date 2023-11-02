#include "main.h"
#include <stdlib.h>

/**
 * array_range- Creates an array of integers
 *
 * @min: The minimum number
 * @max: The maximum number
 *
 * Return: A pointer to an array of integers
 */

int *array_range(int min, int max)
{
	int *new_array, counter, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	new_array = malloc(sizeof(int) * len);

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (counter = 0; counter < len; counter++)
	{
		new_array[counter] = min++;
	}

	return(new_array);
}
