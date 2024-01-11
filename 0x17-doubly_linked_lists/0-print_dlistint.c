#include "lists.h"

/**
 * print_dlistint- Prints all the elements of a dlistint_t list
 * @h: A pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *holder;
	size_t counter = 0;

	holder = h;

	while (holder != NULL)
	{
		printf("%d\n", holder->n);
		counter += 1;
		holder = holder->next;
	}
	return (counter);
}
