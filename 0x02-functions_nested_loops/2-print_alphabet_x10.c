include "_putchar.c"

/**
 * main- Print alphabet in lowercase ten times
 * Return: void
 */

void print_alphabet(void)
{
        char z;
	int i;

	for(i=1; 1<=10; i++)
	{
		 for(z='a'; z<='z'; z++)
        	{
                	_putchar(z);
        	}

        	_putchar("\n");
	}
}

