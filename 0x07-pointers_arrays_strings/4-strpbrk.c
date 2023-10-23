#include "main.h"

/**
 * _strpbrk- Searches a string for any of a set of bytes
 *
 * @s: The string in which the search is being conducted
 * @accept: The string with the list of characters
 * being searched for
 *
 * Return: A pointer to the byte in s that matches one of
 * the bytes in access, or NULL if none matches
 */

char *_strpbrk(char *s, char *accept)
{
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
