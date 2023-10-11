#include "main.h"

/**
 * print_to_98- Prints from current integer to 98
 * Return: void
 */

void print_to_98(int n)
{
	int z, ones, tens;

	if(n>9)
	{
		ones = n % 10;
		tens = (n - ones)/10;
		_putchar(tens + '0');
		_putchar(ones + '0');	
	}
	else
	{
		_putchar(n + '0');
	}

	for(z = n+1; z<=98; z++)
	{
		_putchar(44);
		_putchar(32);
		ones = z % 10;
		tens = (z - ones)/10;
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	_putchar('\n');
}
