#include "main.h"

/**
 * _islower- Tests whether a character is lowercase or not
 * Return: 1 for lowercase or 0 for uppercase and any other character
 */

int _islower(int c)
{
	if(c>=97 && c<=122)
	{
		return (1);
	}

	return (0);
}
