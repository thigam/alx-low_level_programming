#include "lists.h"

/**
 * insert_dnodeint_at_index- Inserts a new node at a given position
 * @h: A pointer to a pointer to the head
 * @idx: The proposed index of the new node
 * @n: The integer to be held in the new node
 *
 * Return: The address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *holder;

	if (*h == NULL && idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	holder = *h;

	while (idx != 0)
	{
		if (holder == NULL)
			return (NULL);
		holder = holder->next;
		idx -= 1;
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = holder;
	if (holder->prev != NULL)
	{
		new->prev = holder->prev;
		holder->prev->next = new;
	}
	else
	{
		new->prev = NULL;
		*h = new;
	}
	holder->prev = new;

	return (new);
}
