#include "main.h"

/**
 * factorial- Returns the factorial of a given number
 *
 * @n: Number who's factorial is returned
 *
 * Return: -1 if n < 0, 0 if n == 1, otherwise it returns
 * the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n != 1)
	{
		n *= factorial(n - 1);
	}
	return (n);
}
