#include "main.h"

/**
 * create_array- Creates an array of chars and initializes
 * it with a specific char
 *
 * @size: Size of the arrya
 * @c: The char to be initialize with
 *
 * Return: NULL if size is == 0 or if it fails, otherwise
 * a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *an_array;
	int counter;

	if (size == 0)
		return (NULL);

	an_array = malloc(sizeof(char) * size);

	if (an_array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		an_array[counter] = c;
	}

	return (an_array);
}
