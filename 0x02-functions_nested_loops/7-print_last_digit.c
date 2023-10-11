#include "main.h"

/**
 * print_last_digit- Prints the last digit of a number
 * @z: Integer
 * Return: last digit of a number
 */

int print_last_digit(int z)
{
	z = z % 10;

	if (z < 0)
	{
		z *= -1;
	}

	_putchar(z + '0');

	return (z);
}
