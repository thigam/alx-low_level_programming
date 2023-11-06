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

void init_dog(struct dog *d, char *name, float age, char *owner);
