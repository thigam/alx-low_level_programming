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
	int counter, len;

	len = 0;

	if (str == NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
	{
		len++;
	}

	new_string = malloc(sizeof(char) * (len + 1));

	if (new_string == NULL)
		return (NULL);

	for (counter = 0; str[counter]; counter++)
	{
		new_string[counter] = str[counter];
	}

	new_string[counter] = '\0';

	return (new_string);
}
