#include "main.h"

/**
 * get_bit- Returns the value of a bit at a given index
 * @n: integer
 * @index: index of the bit
 * 
 * Return: the value at that index, -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0)
		return (-1);
	while (index < 0)
	{
		n =  n>>1;
		index--;
	}

	if ((n & 1) == 1)
		return (1);
	else if ((n & 1) == 0)
		return (0);

	return (-1);
}
