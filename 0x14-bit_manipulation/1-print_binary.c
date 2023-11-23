#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: the decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	while (n)
	{
		if ((n & 1) == 1)
			printf("%d", 1);
		else if ((n & 1) == 0)
			printf("%d", 0);
		n = n>>1;
	}
}
