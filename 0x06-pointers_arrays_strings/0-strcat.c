#include "main.h"

/**
 * _strcat- Appends the src string to the dest string,
 * overswriting the terminating null byte at the 
 * end of dest, and then adds a terminating null
 * byte.
 *
 * @dest: One of the strings to be concatenated
 * @src: The other string to be concatenated
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len_count_dest, len_count_src, counter;

	len_count_dest = 0;
	len_count_src = 0;

	while (dest[len_count_dest] != '\0')
	{
		len_count_dest++;
	}

	while (src[len_count_src] != '\0')
	{
		len_count_src++;
	}
	len_count_src--;

	for (counter = 0; counter <= len_count_src; counter++)
	{
		dest[len_count_dest++] = src[counter];
	}

	return (dest);
}
