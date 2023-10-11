#include "main.h"

/**
 * print_times_table- prints the n times table starting with 0
 * Return: void
 */

void print_times_table(int n)
{
	int x, z, y, ones, tens, k;
	for(x=0; x<=n; x++)
	{
		if(n>15 || n<0)
		{
			break;
		}

		for(y=0; y <= n; y++)
		{
			z=x*y;
			if(y != 0)
			{
				_putchar(44);
				for(k=1; k<=3; k++)
				{
					_putchar(32);
				}
			}

			if(z>9)
			{
				ones = z % 10;
				tens = (z - ones)/10;
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(z + '0');
			}
		}
	}
}
