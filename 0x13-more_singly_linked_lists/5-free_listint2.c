#include "lists.h"

/**
 * free_listint2- frees a listint_t list
 * @head: a pointer to a pointer to the first node
 *
 * Reutrn: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	holder = *head;
	*head = NULL;

	if (holder->next != NULL)
		free_listint2(&(holder->next));

	free(holder);
}
