#include <stdio.h>

/**
 * main- prints out digits
 * Return: 0
 */

int main()
{
	int digit;
	
	for (digit = '0'; digit <= '9'; digit++)
		if (digit/10)
			print(digit/10);
	putchar(digit%10 + '0');
	return 0;
}

