#include "main.h"

/**
 * puts_half- Prints half of a string followed by a new line.
 * @str: Pointer to the string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int len_count, rep_count;

	len_count = 0;

	while (str[len_count] != '\0')
	{
		len_count++;
	}

	if (len_count % 2 == 0)
	{
		for (rep_count = len_count / 2; str[rep_count] != '0'; rep_count++)
		{
			_putchar(str[rep_count]);
		}
	}
	else if (len_count % 2 == 1)
	{
		for (rep_count = (len_count - 1) / 2; rep_count < len_count - 1; rep_count++)
		{
			_putchar(str[rep_count + 1]);
		}
	}
	_putchar('\n');
}
