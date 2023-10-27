#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the minimum number of coins
 * to make change
 *
 * @argc: Number of command line elements
 * @argv: Pointer to an array of pointers containing
 * command line arguments
 *
 * Return: if number of arguments is not 1, -1.
 * Otherwise, 0
 */

int main(int argc, char *argv[])
{
	int money = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (money >= 0)
	{
		money -= 25;
		coins++;
	}
	money += 25;
	coins--;
	while (money >= 0)
	{
		money -= 10;
		coins++;
	}
	money += 10;
	coins--;
	while (money >= 0)
	{
		money -= 5;
		coins++;
	}
	money += 5;
	coins--;
	while (money >= 0)
	{
		money -= 2;
		coins++;
	}
	money += 2;
	coins--;
	while (money >= 0)
	{
		money -= 1;
		coins++;
	}
	money += 1;
	coins--;
	printf("%d\n", coins);
	return (0);
}
