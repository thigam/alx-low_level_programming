#include <stdio.h>

/**
 * main- Prints the base digits of base 16
 * Return: 0
 */

int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers % 10 + '0');
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
