#include "main.h"

/**
 * rev_string- Reverses a string
 * @s: Pointer to string that is to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int counter, max_count;
	char holder[];

	counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	max_count = counter;

	for (counter = 0; counter < max_count; counter++)
	{
		holder[counter] = s[counter];
	}
	for (counter = max_count - 1; counter >= 0; counter--)
	{
		*(s + counter) = holder[max_count - counter];
	}
}
