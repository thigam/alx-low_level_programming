#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- determines the last digit
 * Return: 0
 */


int some_number(int n)
{
	int y;
	
	if (n!=0)
	{
	srand(time(0));
	n=rand() - RAND_MAX / 2;
	}
	y = n % 10;
	if (y > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else 
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	return(0);
}
int main(void)
{
	some_number(98);
	some_number(-98);
	some_number(980);
	return(0);
}

