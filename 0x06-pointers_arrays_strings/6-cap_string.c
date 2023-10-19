/*
 * File: 6-cap_string.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * cap_string- Capitalizes all words of a string
 * @strn: The string containing the words  to be capitalized
 * Return: A pointer to the string with capitalized words (strn)
 */

char *cap_string(char *strn)
{
	int counter;

	for (counter = 0; strn[counter] != '\0'; counter++)
	{
		if (strn[counter] >= 'a' && strn[counter] <= 'z')
		{
			if (strn[counter - 1] == ' ' ||
					strn[counter - 1] == '\t' ||
					strn[counter - 1] == '\n' ||
					strn[counter - 1] == ',' ||
					strn[counter - 1] == ';' ||
					strn[counter - 1] == '.' ||
					strn[counter - 1] == '!' ||
					strn[counter - 1] == '?' ||
					strn[counter - 1] == '"' ||
					strn[counter - 1] == '(' ||
					strn[counter - 1] == ')' ||
					strn[counter - 1] == '{' ||
					strn[counter - 1] == '}' ||
					counter == 0)
			{
				strn[counter] -= 32;
			}
		}
	}
	return (strn);
}
