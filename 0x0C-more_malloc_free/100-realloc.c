#include "main.h"
#include <stdlib.h>

/**
 * _realloc- REallocates a memory block using malloc and
 * free
 *
 * @ptr: A pointer to the memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size of memory block
 *
 * Return: A pointer to the new memory area
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned new_size)
{
	char *copy;
	unsigned int counter;
	void *space;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		space = malloc(new_size);

		if (space == NULL)
		{
			return (NULL);
		}

		return (space);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	space = malloc(sizeof(*copy) * new_size);

	if (space == NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	return (space);
}
