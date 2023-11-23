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
	unsigned long int *left;
	unsigned long int *right;

	if (index < 0)
		return (-1);

	left = left_half(*n, index);
	right = right_half(*n, index);

	*n = left | right;

	return (1);
}

unsigned long int *right_half(unsigned long int *n, unsigned int index)
{
	unsigned int counter, counter_holder;

	counter = 0;

	while (*n)
	{
		n = n>>1;
		counter++;
	}

	counter = counter - index;
	counter_holder = counter;

	while (counter > 0)
	{
		*n = *n<<1;
		counter--;
	}

	counter = counter_holder;

	while (counter > 0)
	{
		*n = *n>>1;
		counter--;
	}

	return (n);
}

unsigned long int *left_half(unsigned long int *n, unsigned int index)
{
	unsigned int index_holder;

	index++;
	index_holder = index;

	while (index > 0)
	{
		*n = *n>>1;
		index--;
	}

	index = index_holder;

	while (index > 0)
	{
		*n = *n<<1;
		counter--;
	}

	return (n);
}
