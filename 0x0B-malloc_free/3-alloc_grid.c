#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- Returns a pointer to a 2 dimensiona
 * array of integers
 *
 *
 * @width: The width of the array
 * @height: the height of the array
 *
 * Return: A pointer to a 2 d array, NULL on failure,
 * or NULLL when height or width is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int counter, w_counter;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < height; counter++)
	{
		array[counter] = malloc(sizeof(int) * width);

		if (array[counter] == NULL)
		{
			for (counter; counter >= 0; counter--)
				free(array[counter]);

			free(array);
			return (NULL);
		}
	}

	for (counter = 0; counter < height; counter++)
	{
		for (w_counter = 0; w_counter < width; w_counter)
		{
			array[counter][w_counter] = 0;
		}
	}

	return (array);
}
