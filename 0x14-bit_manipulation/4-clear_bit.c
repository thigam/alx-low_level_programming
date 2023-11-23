#include "main.h"

/**
 * clear_bit- Sets the value of a bit to 0 at a given index
 * @n: a pointer to the number
 * @index: index where bit will be set to 0
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int holder;

	holder = 1;
	holder = holder<<index;

	*n = *n & (~holder);

	return (1);
}
