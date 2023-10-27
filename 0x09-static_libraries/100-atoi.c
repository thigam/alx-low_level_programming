#include "main.h"

/**
 * _atoi- Converts a string to an integer
 * @s: Is a pointer to the string to be ocnverted
 * Return: Integer from the converted string, or 0 when no numbers are in the string
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, i = 0, p = 1, mo = 1, in;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			p *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				mo *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		i = i + ((*(s + in) - 48) * mo);
		mo /= 10;
	}
	return (i * p);
}
