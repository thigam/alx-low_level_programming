#include "main.h"

/**
 * _strspn- Gets the length of a prefix substring
 * @s: The String
 * @accept: String with the accepted bytes
 * Return: Number of bytes in the segment if s, which
 * consists only of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int s_counter, accept_counter, bytes;

	bytes = 0;

	for (s_counter = 0; s[s_counter] != '\0'; s_counter++)
	{
		if (s[s_counter] != 32)
		{
			for (accept_counter = 0; accept[accept_counter] != '\0'; accept_counter++)
			{
				if (s[s_counter] == accept[accept_counter])
				{
					bytes++;
				}
			}
		}
		else
		{
			return (bytes);
		}
	}
	
	return (bytes);
}
