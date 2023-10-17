#include "main.h"

/**
 * rev_string- Reverses a string
 * @s: Pointer to string that is to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int counter, max_count;
	char holder;

	counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	max_count = counter;
	max_count--;

	for (counter = 0; counter < (max_count + 1) / 2; counter++)
	{
		holder = s[counter];
		s[counter] = s[max_count];
		s[max_count--] = holder;
	}
}
