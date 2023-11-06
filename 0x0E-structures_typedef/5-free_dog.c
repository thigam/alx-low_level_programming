#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- Frees structs of type dog
 *
 * @d: Pointer to the struct
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
