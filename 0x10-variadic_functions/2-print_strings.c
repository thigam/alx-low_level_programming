#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- Prints stirngs
 * @separator: The string to be printed between strings
 * @n: The umber of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int counter;

	va_start(words, n);

	if (separator == NULL)
		return;
	for (counter = 1; counter <= n; counter++)
	{
		printf("%s", va_arg(words, char *));
		if (counter != n)
			printf("%s", separator);
	}
	
	va_end(words);
	printf("\n");
	return;
}
