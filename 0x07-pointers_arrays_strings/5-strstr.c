#include "main.h"

/**
 * _strstr- Locates a substring
 *
 * @haystack: The larger string that possibly contains
 * the substring
 * @needle: The substring being searched for
 *
 * Return: A pointer to the beginning of the located
 * substring or NULL if it is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int counter, needle_len;

	needle_len = 0;

	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}

	while (*haystack)
	{
		for (counter = 0; needle[counter]; counter++)
		{
			if (haystack[counter] != needle[counter])
			{
				break;
			}
		}
		if (counter != needle_len)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
