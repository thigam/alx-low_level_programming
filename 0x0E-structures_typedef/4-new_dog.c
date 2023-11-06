#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- Creates a new dog
 *
 * @name: It's name
 * @age: It's age
 * @owner: The dog's owner
 *
 * Return: A pointer to the new struct
 */

dog_t *new_dog(char *name, float age, char *owner);
int _len(char *word);
char *copier(char *copy, char *source);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(sizeof(char) * (_len(name) + 1));

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_len(owner)+1));
	
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = copier(doggy->name, name);
	doggy->age = age;
	doggy->owner = copier(dogyy->owner, owner);

	return (doggy);
}

/**
 * _len- Gets length of a string
 *
 * @word: The string
 *
 * Return: The length of the string
 */

int _len(*word)
{
	int length;

	length = 0;

	while (*word++)
	{
		length++;
	}

	return (length);
}

/**
 * copier- Copies a string into a new one
 *
 * @copy: The buffer storing the copied string
 * @source: The original string
 *
 * Return: A pointer to the new string
 */

char *copier(char *copy, char *source)
{
	int counter;

	counter = 0;

	for (counter = 0; source[counter]; counter++)
	{
		copy[counter] = source[counter];
	}

	copy[counter] = '\0';

	return (copy);
}
