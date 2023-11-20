#include "lists.h"

/**
 * print_listint- Prints all the elements of a listint list
 * @h: The first node of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 1;
	const listint_t *holder;

	holder = h;

	printf("%d\n", holder->n);

	while (holder->next)
	{
		holder = holder->next;
		printf("%d\n", holder->n);
		counter++;
	}

	return (counter);
}
