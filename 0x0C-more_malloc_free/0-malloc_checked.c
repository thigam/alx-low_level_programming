#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- Allocates memory using malloc
 *
 * @b: The amount of memory required
 *
 * Return: 98 if malloc fails, otheriwse
 * a pointer t the memory area
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
