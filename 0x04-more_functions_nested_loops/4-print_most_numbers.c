#include "main.h"

/**
 * print_most_numbers- Prints numbers from 0 to 9 but does not print 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if (z = 2 || z = 4)
		{
			continue;
		}
		_putchar(z + '0');
	}
	_putchar('\n');
}
