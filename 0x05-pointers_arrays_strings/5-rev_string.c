#include "main.h"

/**
 * rev_string- Reverses a string
 * @s: Pointer to string that is to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int rep_count, len_count, changing_len;
	char holder;

	len_count = 0;

	while (*(s + len_count) != '\0')
	{
		len_count++;
	}

	changing_len = len_count - 1;

	for (rep_count = 0; rep_count < (changing_len + 1) / 2; rep_count++)
	{
		holder = s[rep_count];
		s[rep_count] = s[changing_len];
		s[changing_len--] = holder;
	}
}
