#include "lists.h"

/**
 * delete_dnodeint_at_index- Deletes the node at index index
 * of a dlistint_t linked list
 * @head: A pointer to a pointer to the first node
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder;

	if (*head == NULL)
	{
		return (-1);
	}

	holder = *head;

	while (index != 0)
	{
		if (holder == NULL)
			return (-1);
		holder = holder->next;
		index -= 1;
	}

	if (holder->prev != NULL)
	{
		holder->prev->next = holder->next;
		holder->next->prev = holder->prev;
	}
	else if (holder->next != NULL)
	{
		*head = holder->next;
		holder->next->prev = NULL;
	}
	else
	{
		*head = NULL;
	}

	free(holder);

	return (1);
}
