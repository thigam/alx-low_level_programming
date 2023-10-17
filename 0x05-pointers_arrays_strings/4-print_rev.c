#include "main.h"

/**
 * print_rev- Prints a string in reverse followed by a newline
 * @s: Pointer to the string being printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int counter;

	counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	for (counter = counter; counter >= 0; counter--)
	{
		_putchar(*(s + counter));
	}
	_putchar('\n');
}
