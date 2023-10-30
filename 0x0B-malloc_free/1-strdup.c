#include "main.h"
#include <stdlib.h>

/**
 * _strdup- Returns a pointer to a new string which
 * is a duplicate of the string str
 *
 * @str: The string to be duplicated
 *
 * Return: NULL is str == NULL or if insufficient memory
 * was available, otherwise returns pointer to the duplicated
 * string
 */

char *_strdup(char *str)
{
	char *new_string;

	if (str == NULL)
		return (NULL);

	new_string = malloc(len(*str));

	if (new_string == NULL)
		return (NULL);

	return (new_string);
}
