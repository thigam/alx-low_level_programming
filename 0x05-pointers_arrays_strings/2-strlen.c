#include "main.h"

/**
 * _strlen- Returns the length of a string
 * @s: Pointer to the first character in an array
 * Return: Length of string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
