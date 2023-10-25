#include "main.h"

int sqrt_helper(int x, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion- Calculates the natural square root of a
 * number
 *
 * @n: The number who's natural square root is to
 * be calculated
 *
 * Return: The natural square root of the number
 */

int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (sqrt_helper(n, y));
}

/**
 * sqrt_helper- Finds the natural square root of a number
 *
 * @x: The number who's square root is being searched for
 * @root: The number suspected to be the root of x
 *
 * Return: -1 if x has no natural root, otherwise the root
 */

int sqrt_helper(int x, int root)
{
	if ((root * root) == x)
		return (root);
	if (root == x / 2)
		return (-1);

	return (sqrt_helper(x, root + 1));
}
