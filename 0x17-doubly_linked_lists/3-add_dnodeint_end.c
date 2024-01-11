#include "lists.h"

/**
 * add_dnodeint_end- Adds a new node at the end of a dlistint_t list
 * @head: A pointer to a pointer to the first node
 * @n: The integer to be held in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *holder;

	holder = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (holder == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		(*head) = new;
		return (new);
	}

	while (holder->next != NULL)
	{
		holder = holder->next;
	}

	new->prev = holder;
	new->n = n;
	new->next = NULL;
	holder->next = new;

	return (new);
}
