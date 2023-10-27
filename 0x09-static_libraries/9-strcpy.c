#include "main.h"

/**
 * _strcpy- Copies the string pointed to, to a buffer
 * @dest: the buffer in which the string will be copied
 * @src: the pointer to the string
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int rep_counter, len_counter;

	len_counter = 0;
	while (src[len_counter] != '\0')
	{
		len_counter++;
	}
	len_counter--;
	for (rep_counter = 0; rep_counter <= len_counter; rep_counter++)
	{
		dest[rep_counter] = src[rep_counter];
	}
	dest[rep_counter] = '\0';
	return (dest);
}
