#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- Returns the sum of all its
 * parameters
 * @n: number of integers to be added
 * Return: sum, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int counter;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(number, n);

	for (counter = 1; counter <= n; counter++)
	{
		sum+= va_arg(number, int);
	}
	va_end(number);
	return (sum);
}
