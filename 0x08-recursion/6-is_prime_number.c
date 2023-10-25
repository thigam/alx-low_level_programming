#include "main.h"

int is_prime_number(int n);
int divider(int x, int div);

/**
 * is_prime_number- Determines whether a number is a prime
 * number
 *
 * @n: The number being determined
 *
 * Return: 1 if it is prime, otherwise 0
 */

int is_prime_number(int n)
{
	int y = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (divider(n, y));
}

/**
 * divider- Divides repeatedly to confirm divisibility
 *
 * @x: The number being divided
 * @div: The divisor
 *
 * Return: 0 if x is divisible, -1 if not
 */

int divider(int x, int div)
{
	if (x % div == 0)
	{
		return (0);
	}
	if (div == x / 2)
	{
		return (1);
	}

	return (divider(x, div + 1));
}
