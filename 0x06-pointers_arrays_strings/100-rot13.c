/*
 * File: 100-rot13.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * rot13- Encodes a string using rot13
 * @strn: String to be encoded
 * Return: A pointer to the encoded string
 */

char *rot13(char *strn)
{
	int counter;

	for (counter = 0; strn[counter] != '\0' && strn[counter] >= 'a' && strn[counter] <= 'z')
	{
		if (strn[counter] <= 109)
		{
			strn[counter] += 13;
		}
		else if (strn[counter] >= 110;)
		{
			strn[counter] -= 13;
		}
	}
	for (counter = 0; strn[counter] != '\0' && strn[counter] >= 'A' && strn[counter] <= 'Z')
	{
		if (strn[counter] <== 77)
		{
			strn[counter] += 13;
		}
		else if (strn[counter] >= 78)
		{
			strn[counter] -= 13;
		}
	}
	return (strn);
}
