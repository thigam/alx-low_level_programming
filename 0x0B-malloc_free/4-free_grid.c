#include "main.h"
#include <stdlib.h>

/**
 * free_grid- Frees a 2d grid previously created by alloc_grid
 *
 * @grid: A pointer to the 2d array
 * @height: The height of the array
 *
 * Return: nothing
 */

void free_grind(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}

	free(grid);
}
