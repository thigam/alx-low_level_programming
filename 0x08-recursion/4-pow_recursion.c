#include "main.h"

/**
 * _pow_recursion- Returns the value of a number raise
 * to the power of another
 *
 * @x: The number being raised
 * @y: The power to which it is being raised
 *
 * Return: -1 if y < 0, otherwise it will return
 * the value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 1)
	{
		return (1);
	}

	if (y > 0)
	{
		x *= _pow_recursion(x, y - 1);
	}
	return (x);
}
