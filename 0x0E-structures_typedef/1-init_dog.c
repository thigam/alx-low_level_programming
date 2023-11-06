#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- Initializes a variable of type struct
 * dog
 * @d: The dog
 * @name: It's name
 * @age: The dog's age
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d!= NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
