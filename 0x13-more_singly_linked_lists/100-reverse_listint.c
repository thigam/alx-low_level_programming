#include "lists.h"

/**
 * reverse_listint- Reverses a listint_t linked list
 * @head: a pointer to a pointer to the first node
 *
 * Return: a pointer to the first node of the reveresed list, NULL if failed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;

	if (*head == NULL)
		return (NULL);

	previous = *head;
	current = previous->next;

	while (previous->next)
	{
		_changer(previous, current);
	}

	return (previous);
}

void _changer(listint_t *previous, listint_t *current)
{
	listint_t *after;

	after = current->next;
	current->next = previous;
	previous = current;
	current = after;
}
