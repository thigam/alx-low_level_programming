#include "lists.h"

/**
 * free_dlistint- Frees a dlistint_t list
 * @head: A pointer to a pointer to the first node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *after;

	if (head == NULL)
		return;

	after = (head);

	while (after != NULL)
	{
		current = after;
		after = current->next;
		free(current);
	}
}
