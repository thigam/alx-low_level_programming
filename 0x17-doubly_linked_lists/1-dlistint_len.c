#include "lists.h"

/**
 * dlistint_len- Returns the number of elements in a linked dlistint_t list
 * @h: A pointer to the first node
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *holder;
	size_t counter;

	holder = h;
	counter = 0;

	while (holder != NULL)
	{
		counter += 1;
		holder = holder->next;
	}

	return counter;
}
