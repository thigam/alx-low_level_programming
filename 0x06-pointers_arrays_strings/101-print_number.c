/*
 * File: 101-print_number.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * print_number- Prints an integer
 * @n: Integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	int counter, holder, digits, output;

	digits = 1;
	holder = n;

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	
	while (n > 9)
	{
		holder /= 10;
		digits++;
	}

	for (counter = digits - 1; counter >= 0; counter--)
	{
		if ( n == 0)
		{
			_putchar(48);
			break;
		}

		output = n / (10 ** counter);
		_putchar(output + '0');
	}
}
