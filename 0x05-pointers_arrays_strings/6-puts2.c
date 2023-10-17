#include "main.h"

/**
 * puts2- Prints every other character of string,
 * starting with the first character, followed by a new line
 * @str: Pointer to the string to be printed
 * Return: nothing
 */

void puts2(char *str)
{
	int len_count, rep_count;

	len_count = 0;

	while (str[len_count] != '\0')
	{
		len_count++;
	}
	len_count--;

	for (rep_count = 0; rep_count <= len_count; rep_count++)
	{
		if (rep_count % 2 != 0)
		{
			continue;
		}
		_putchar(str[rep_count]);
	}
	_putchar('\n');
}
