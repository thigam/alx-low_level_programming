#include "main.h"

/**
 * main- Prints "_putchar"
 * Return: 0
 */

int main(void)
{
	int counter;
	char str[] = "_putchar";

	for (counter = 0; counter <= 7; counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
	return (0);
}
