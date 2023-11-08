#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name- Prints a name
 *
 * @name: Name to be printed
 * @f: A pointer to the function that prints
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
