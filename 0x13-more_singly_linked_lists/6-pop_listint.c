#include "lists.h"

/**
 * pop_listint- Deletes the hed node of a listint_t linked list
 * @head: A pointer to the pointer to the first node
 *
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *holder;
	int n;

	holder = *head;

	if (holder == NULL)
		return (0);

	n = holder->n;
	*head = holder->next;
	free(holder);

	return (n);
}
