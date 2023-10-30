#include "main.h"
#include <stdlib.h>

/**
 * str_concat- Concatenates two strings
 *
 * @s1: First string
 * @s2: second string
 *
 * Return: NULL on failure, poiner to a newly allocated space
 * containing the contents of s1 followed by the contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int counter_s1, counter_s2, len = 0;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s1[0] = '\0';

	for (counter_s1 = 0; s1[counter_s1]; counter_s1++)
	{
		len++;
	}

	for (counter_s2 = 0; s2[counter_s2]; counter_s2++)
	{
		len++;
	}

	len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (counter_s1 = 0; s1[counter_s1]; counter_s1++)
	{
		concat_str[counter_s1] = s1[counter_s1];
	}

	for (counter_s2 = 0; s2[counter_s2]; counter_s2++)
	{
		concat_str[counter_s1 + counter_s2] = s2[counter_s2];
	}

	concat_str[len] = '\0';

	return (concat_str);
}
