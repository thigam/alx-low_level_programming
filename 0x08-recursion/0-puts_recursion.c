#include "main.h"

/**
 * _puts_recursion- Prints a string followed by a new
 * line
 *
 * @s: Pointer to the string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(s[0]);

	if (s[0] != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
