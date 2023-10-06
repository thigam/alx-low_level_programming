#include <stdio.h>

/**
 * main- prints out digits
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}

