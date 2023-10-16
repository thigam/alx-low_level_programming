#include "main.h"

/**
 * _atoi- Converts a string to an integer
 * @s: Is a pointer to the string to be ocnverted
 * Return: Integer from the converted string, or 0 when no numbers are in the string
 */

int _atoi(char *s)
{
	int digit, rep_count, len_count, null_count;
	char sign;

	len_count = 0;
	sign = 'n';
	null_count = 0;
	digit = 0;
	while (s[len_count] != '\0')
	{
		len_count++;
	}
	for (rep_count = 0; rep_count <= len_count; rep_count++)
	{
		if (s[rep_count] == '-' && sign == 'n')
		{
			sign = 'p';
			null_count++;
			continue;
		}
		else if (s[rep_count] == "-" && sign == 'p')
		{
			sign = 'n';
			null_count++;
			continue;
		}
		else if !(s[rep_count] >= 48 && s[rep_count] <= 57)
		{
			null_count++;
			continue;
		}
		digit_pos++;
		number = number 
