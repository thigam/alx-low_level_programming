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
	unsigned long int holder;

	holder = 1;
	holder = holder<<index;

	*n = *n | holder;

	return (1);
}
