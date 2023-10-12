#include <stdio.h>

/**
 * fizz_buzz- Prints numbers from 0 to 100, substituting fizz for multiples of 3, buzz for multiples of 5 and FizzBuzz for multiples of three and five
 * Return: void
 */

void fizz_buzz(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (counter % 3 == 0 && counter % 5 != 0)
		{
			printf("Fizz");
		}
		else if (counter % 3 != 0 && counter % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
		if (counter != 100)
		{
			printf(" ");
		}
	}
}
