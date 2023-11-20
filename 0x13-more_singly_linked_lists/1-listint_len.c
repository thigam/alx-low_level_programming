#include "lists.h"

/**
 * listint_len- Returns the number of elements in a linked listint_t list
 * @h: The pointer to the first node
 * 
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 1;
	const listint_t *holder = h;

	while (holder->next)
	{
		holder = holder->next;
		counter++;
	}

	return (counter);
}
