/*
 * File: 5-string_toupper.c
 * Auth: Matthew Mwangi
 */

#include "main.h"

/**
 * string_toupper- Changes all lowercase letters of a string to uppercase
 * @strn: The string containing letters
 * Return: The string with lowercase characters capitalised
 */

char *string_toupper(char *strn)
{
	int counter;

	for (counter = 0; strn[counter] != '\0'; counter++)
	{
		if (strn[counter] >= 'a' && strn[counter] <= 'z')
		{
			strn[counter] -= 32;
		}
	}
	return (strn);
}
