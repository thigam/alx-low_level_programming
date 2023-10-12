#include "main.h"

/**
 * print_number- Prints an integer
 * @n: Integer to be printed
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else{
		
		int length, counter, z, y = n;
		
		for (length = 0; y > 9; ++length)
		{
			y = (y - (y % 10));
			y /= 10;
		}
		z = n;
		for (counter = length; counter >= 1; counter--)
		{
			z = n;
			z = z - (z % (10 ** (counter - 1)));
			z /= (10 ** (counter - 1));
			_putchar(z + '0');
		}
	}
}
