#include "lists.h"

/**
 * free_listint- Frees a  listint_t list
 * @head: A pointer to the first node in the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	holder = head;

	if (holder->next != NULL)
		free_listint(holder->next);

	free(holder);
}
