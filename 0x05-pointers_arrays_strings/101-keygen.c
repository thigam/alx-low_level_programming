#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
 * main- Generates random passwords for the program 101-crackme
 *
 * Return: Always 0 
 */

int main(void)
{
	int password[100];
	int x, y, sum;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		password[x] = rand() % 78;
		sum = sum + (password[x] + '0');
		putchar(password[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum = sum + y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
