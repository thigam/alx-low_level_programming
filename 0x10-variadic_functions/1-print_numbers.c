#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- Prints numbers followed by a new line
 * @seprator: The character between numbers
 * @n: The number of numbers to be printed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int counter;

	if (separator == NULL)
		return;

	va_start(number, n);
	
	for (counter = 1; counter <= n; counter++)
	{
		printf("%d", va_arg(number, int));
		if (counter != n)
			printf("%s", separator);
	}
	printf("\n");
}
