#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A type for dogs description
 * @name: It's name
 * @age: It's age
 * @owner: Owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner
};

/**
 * dog_t- typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
