#include "main.h"

/**
 * _strncat- Concatanates two strings but uses at most
 * n bytes from src and src does not need to be null-t
 * erminated if it contains n or more bytes
 *
 * @dest: The string being concatenated
 * @src: The other string being concatenated
 * @n: The maximum number of bytes being used from src
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len, counter;

	dest_len = 0;
	src_len = 0;
	
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (counter = 0; counter < src_len && counter < n; counter++)
	{
		dest[dest_len++] = src[counter];
	}
	return (dest);
}
