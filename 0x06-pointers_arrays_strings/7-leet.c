/*
 * File: 7-leet.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * leet- Encodes a string into 1337
 * @strn: String with the characters to be encoded
 * Return: A pointer to strn with encoded characters
 */

char *leet(char *strn)
{
	int counter, table_index;
	char table[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (counter = 0; strn[counter] != '\0'; counter++)
	{
		for (table_index = 0; table[table_index] != '\0'; table_index++)
		{
			if (strn[counter] == table[table_index] || strn[counter] - 32 == table[table_index])
			{
				strn[counter] = table[table_index] + '0';
			}
		}
	}
	return (strn);
}
