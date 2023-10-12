/*
 * File: 6-print_line.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * print_line- Prints a straight line
 * @n: Dictates the length of the line in terms of _ characters
 */

void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
