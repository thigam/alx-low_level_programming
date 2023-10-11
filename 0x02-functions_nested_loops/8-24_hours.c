#include "main.h"

/**
 * jack_bauer- Prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int n, x, y, z;
	for(n=0; n<=2; n++)
	{
		for(x=0; x<=9; x++)
		{
			for(y=0; y<6; y++)
			{
				for(z=0; z<=9;z++)
				{
                               		_putchar(n + '0');
                                        _putchar(x + '0');
                                    	_putchar(58);
                                        _putchar(y + '0');
                                     	_putchar(z + '0');
                                }
                        }
                        if(x>=4 && n==2)
			{
				break;
			}
                }
        }
}
