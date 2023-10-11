#include "main.h"

/**
 * print_alphabet_x10- Print alphabet in lowercase ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char z;
	int i;

	for(i=1; i<=10; i++)
	{
		for(z='a'; z<='z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}

