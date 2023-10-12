#include "main.h"

/**
 * print_diagonal- Draws a diagonal line on the terminal
 * @n: Number of characters to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int counter, counter2;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			if (counter > 1)
			{
				for (counter2 = 1; counter2 <= counter - 1; counter2++)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar(36);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
