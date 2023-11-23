#include "main.h"

/**
 * set_bit- sets the value of a bit to 1 at a given index
 * @n: a pointer to the integer
 * @index: the index where the bit is to be set
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_holder;

	index_holder = index;

	if (index < 0)
		return (-1);

	while (index > 0)
	{
		*n = *n>>1;
		index--;
	}

	if ((*n & 1) != 1 && (*n & 1) != 0)
	{
		return (-1);
	}
	else if ((*n & 1) == 0)
	{
		*n = *n | 1;
	}

	index = index_holder;

	while (index > 0)
	{
		*n = *n<<1;
		index--;
	}

	return (1);
}
