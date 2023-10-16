#include "main.h"

/**
 * puts_half- Prints half of a string followed by a new line.
 * @str: Pointer to the string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int len_count, rep_count, n;

	len_count = 0;

	while (str[len_count] != '\0')
	{
		len_count++;
	}
	len_count--;

	if (len_count % 2 == 0)
	{
		n = len_count / 2;
	}
	else if (len_count % 2 == 1)
	{
		n = (len_count - 1) / 2;
	}

	for (rep_count = n - 1; rep_count >= 0; rep_count--)
	{
		_putchar(str[len_count - rep_count]);
	}
}
