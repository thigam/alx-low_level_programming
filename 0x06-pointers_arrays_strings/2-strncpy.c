#include "main.h"

/**
 * _strncpy- Copies a string
 *
 * @dest: Where string will be copied to
 * @src: Where string is being copied from
 * @n: The number of bytes being copied from src
 * Return: A pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len, src_count, null_count;

	src_len = 0;

	while (src[src_len] != 0)
	{
		src_len++;
	}

	for (src_count = 0; src_count < src_len && src_count < n; src_count++)
	{
		dest[src_count] = src[src_count];
	}

	for (null_count = src_len; null_count < n; null_count++)
	{
		dest[null_count] = '\0';
	}

	return (dest);
}
