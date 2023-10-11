#include "main.h"

/**
 * times_table- Prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int n, m, x, y, z;
	for(n=0; n<=9; n++)
	{
		for(m=0; m<=9; m++)
		{
			x=m*n;
			if(x>9)
			{
				y=x%10;
				z=(x-y)/10;

				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if(y!=0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(x + '0');
			}
		}

		_putchar('\n');
	}
}
