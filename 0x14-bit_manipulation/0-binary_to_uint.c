#include "main.h"

/**
 * binary_to_uint- Converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 characters
 *
 * Return: the converted integer, 0 if one or more chars in b is not 0 or1
 * or b is NULL
 */

unsigned int power(int a, int b);
unsigned int binary_to_uint(const char *b);

unsigned int binary_to_uint(const char *b)
{
	unsigned int numb;
	int counter, position;

	numb = 0;
	counter = 0;
	position = 0;

	if (b == NULL)
		return (0);

	while (b[counter])
	{
		position++;
	}

	while (b[counter])
	{
		if (b[counter] == '0')
			numb = numb + 0;
		else if (b[counter] == '1')
			numb = numb + power(2, position);
		else
			return (0);
		position--;
	}

	return (numb);
}

unsigned int power(int a, int b)
{
	unsigned int power;

	power = 1;

	if (b == 0)
		return (1);

	while (b > 0)
	{
		power *= a;
		b--;
	}
	return (power);
}
