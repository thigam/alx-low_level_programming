#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: The portion of s2 to be concatenated to
 * s1
 *
 * Return: a pointer to the new stirng, NULL
 * if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int len_counter = 0, rep_counter;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_counter])
		len_counter++;

	new_string = malloc(sizeof(char) * (len_counter + n + 1));

	if (new_string == NULL)
		return (NULL);

	len_counter = 0;

	for (rep_counter = 0; s1[rep_counter]; rep_counter++)
	{
		new_string[len_counter++] = s1[rep_counter];
	}

	for (rep_counter = 0; s2[rep_counter] && rep_counter < n; rep_counter++)
	{
		new_string[len_counter++] = s2[rep_counter];
	}

	new_string[len_counter] = '\0';

	return (new_string);
}
