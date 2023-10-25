#include "main.h"

/**
 * _strlen_recursion- Returns the length of a string
 *
 * @s: The string
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;

	if (s[0] != '\0')
	{
		counter = _strlen_recursion(s + 1) + 1;
	}
	return (counter);
}
