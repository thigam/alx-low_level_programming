#include <stdio.h>

/**
 * prime_factor- Prints the largest prime factor of a number
 * @n: Number being investigated
 * Return: 0
 */

int prime_factor(int n)
{
	int z, y = 2;

	while (n > 1)
	{
		
		if (n % y == 0)
		{
			z = y;
			n = n / y;
		}
		else
		{
			y++;
		}
	}
	printf("%d", z);
	return (0);
}
