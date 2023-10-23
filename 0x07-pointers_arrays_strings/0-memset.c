#include "main.h"

/**
 * _memset- Fills memory with a constant byte
 * @s: A pointer to the area to be filled by the constant byte
 * @b: The constant byte
 * @n: Dictates the number of bytes to be filled
 * Return: A pointer to the area filled by the byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return(s);
}
