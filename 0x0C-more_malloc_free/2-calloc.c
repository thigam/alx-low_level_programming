#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc- Allocates memory for an array using malloc
 *
 * @nmemb: An array
 * @size: size of each element
 *
 * Return: Pointer to an array of a spceified type
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int counter;
	void *space;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	space = malloc(size * nmemb);

	if (space == NULL)
	{
		return (NULL);
	}

	counter = 0;
	while (counter < nmemb * size)
	{
		space[counter] = 0;
		counter++;
	}

	return (space);
}
