#include "main.h"

/**
 * _memcpy- Copies memory area from one parameter to the other
 * @dest: The destination: where the memory area
 * will be copied
 * @src: The source: where the memory area is copied from
 * @n: The number of bytes to be copied
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}
