#include "main.h"

/**
 * tlip_bits- Finds out number of bits that would be flipped to convert one number to another
 * @n: the number to be flipped
 * @m: the new number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;
	unsigned int counter;

	bits = (n ^ m);
	counter = 0;

	while (bits)
	{
		if ((bits & 1) == 1)
		{
			counter ++;
		}
		bits = bits >> 1;
	}
	
	return (counter);
}
