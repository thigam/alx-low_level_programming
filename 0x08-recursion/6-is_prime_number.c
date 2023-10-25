#include "main.h"

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
	if (n < 1)
	{
		n *= -1;
	}
	if (n > 1)
	{
		if (n
