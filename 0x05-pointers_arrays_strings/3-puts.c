#include "main.h"

/**
 * _puts- Prints a string followed by a newline to stdout
 * @str: Pointer to string being printed
 * Return: nothing
 */

void _puts(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
