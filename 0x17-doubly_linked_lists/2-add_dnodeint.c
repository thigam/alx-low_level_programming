#include "lists.h"

/**
 * add_dnodeint- Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to a pointer to the first node
 * @n: The integer to be held in the new node
 *
 * Return: The address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	(*head) = new;

	return (new);
}
