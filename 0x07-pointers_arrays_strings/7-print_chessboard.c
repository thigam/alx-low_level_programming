#include "main.h"

/**
 * print_chessboard- Prints the chessboard
 *
 * @a: the row
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int row_counter, col_counter;

	for (row_counter = 0; row_counter < 8; row_counter++)
	{
		for (col_counter = 0; col_counter < 8; col_counter++)
		{
			if (col_counter == 7)
			{
				_putchar(a[row_counter][col_counter]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[row_counter][col_counter]);
			}
		}
	}
}
