#include "main.h"
#include <stdlib.h>

/**
 * _strchr- Locates a charachter in a string
 * @s: The string in which the charachter is searched for
 * @c: The character being searched for
 * Return: A pointer to the first occurence of the character
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s)
	}

	return (NULL);
}
