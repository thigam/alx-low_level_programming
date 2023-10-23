#include "main.h"

/**
 * set_string- Sets the value of a pointer to a char
 *
 * @s: Pointer to a certain string
 * @to: pointer to the second string. It's val
 * will be changed
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
