#include "main.h"

/**
 * more_numbers- Prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int z, y, ones, tens;

	for (z = 0; z <= 14; z++)
	{
		y = z * 10;
		ones = y % 10;
		tens = (y - ones) / 10;
		if (y > 9)
		{
			_putchar(tens + '0');
		}
		_putchar(ones + '0');
	}
	_putchar('\n');
}
