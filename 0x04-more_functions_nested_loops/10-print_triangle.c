#include "main.h"

/**
 * print_triangle- Prints a triangle followed by a new line
 * @size: Defines the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int counter_1, counter_2, counter_3, counter_2_limit, counter_3_limit;

		for (counter_1 = 1; counter_1 <= size; counter_1++)
		{
			counter_2_limit = size - counter_1;
			counter_3_limit = counter_1;

			for (counter_2 = 1; counter_2 <= counter_2_limit; counter_2++)
			{
				_putchar(32);
			}
			for (counter_3 = 1; counter_3 <= counter_3_limit; counter_3++)
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
