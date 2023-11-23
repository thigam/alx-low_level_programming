#include "main.h"

/**
 * print_binary- prints the binary representation of a number
 * @n: the decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	char holder[64] = {'\0'};

	if (n == 0)
	{
		_adder(holder, '0');
	}
	else
	{
		while (n)
		{
			if ((n & 1) == 1)
				_adder(holder, '1');
			else if ((n & 1) == 0)
				_adder(holder, '0');
			n = n>>1;
		}
	}
	reverser(holder);
	printf("%s\n", holder);
}

void _adder(char *holder, char c)
{
	int counter = 0;

	while (holder[counter])
		counter++;

	holder[counter] = c;
}

void reverser(char *holder)
{
	int index = 0;
	char temporary;

	temporary = holder[index];
	holder[index] = holder[strlen(holder) - index - 1];
	holder[strlen(holder) - index - 1] = temporary;
}
