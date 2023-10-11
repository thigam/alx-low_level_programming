#include "_putchar.c"

/**
 * main- Print alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char z;

	for(z='a'; z<='z'; z++)
	{
		_putchar(z);
	}

	_putchar("\n");

}
