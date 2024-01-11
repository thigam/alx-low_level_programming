#include "lists.h"

/**
 * get_dnodeint_at_index- Returns the nth node of a dlistint_t linked list
 * @head: A pointer to the first node
 * @index: The position of the node being looked for
 *
 * Return: The address of the node, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *holder;

	if (head == NULL)
		return NULL;

	holder = head;

	while (index != 0)
	{
		if (holder == NULL)
			return NULL;
		holder = holder->next;
		index -= 1;
	}

	return holder;
}
