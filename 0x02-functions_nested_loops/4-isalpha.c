#include "main.h"

/**
 * _isalpha- Checks whether a character is a letter
 * @c: Integer representing the letter
 * Return: 1 for a letter and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
