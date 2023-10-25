#include "main.h"

int len(char *s);
int palin_check(char *s, int l, int x);
int is_palindrome(char *s);

/**
 * is_palindrome- Determines whether a string is
 * a palindrome or not
 *
 * @s: A pointer to the string
 *
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int x = 0;
	int l = len(s);

	if (!(*s))
		return (1);

	return (palin_check(s, l, x));
}

/**
 * palin_check- Checks if it is a palindrome
 *
 * @s: The string being checked
 * @l: The length of the string
 * @x: The index
 *
 * Return: if palindrome -1, if not 0
 */

int palin_check(char *s, int l, int x)
{
	if (s[x] == s[l / 2])
		return (1);
	if (s[x] == s[l - x - 1])
		return (palin_check(s, l, x + 1));

	return (0);
}

/**
 * len- Finds the length of a string
 *
 * @s: The string
 *
 * Return: The length
 */

int len(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += len(s + l);
	}

	return (l);
}
