/*
 * File: 3-strcmp.c
 * Auth: Matthew Mwangi
 */

#include "main.h"

/**
 * _strcmp- Compares two strings
 * @s1: First string being compared
 * @s2: The second string being compared
 * Return: If string 1 < string 2, the negative diff
 * erence of the first characters that do not match, if
 * they match, 0, and if string 1 < string 2, the posi
 * tive diff of the first characters that do not match.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
