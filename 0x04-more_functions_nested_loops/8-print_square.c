/*
 * File: 8-print_square.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * print_sqaure- Prints a square
 * @size: Defines the size of the square
 */

void print_square(int size)
{
	int counter_1, counter_2;

	if (size > 0)
	{
		for (counter_1 = 1; counter_1 <= size; counter_1++)
		{
			for (counter_2 = 1; counter_2 <= size; counter_2++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
