#include "lists.h"

/**
 * delete_nodeint_at_index- Deletes the node at a given index of a listint_t linked list
 * @head: A pointer to a pointer to the first node
 * @index: The position of the node to be deleted
 *
 * Return: 1 if it succeeds, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder;
	listint_t *holder_2;
	unsigned int counter;

	holder = *head;
	counter = 0;
	holder_2 = *head;

	if (holder == NULL)
		return (-1);

	if (index == 0)
	{
		*head = holder->next;
		free(holder);
		return (1);
	}

	while (counter <= index)
	{
		if (holder == NULL)
			return (-1);

		if (counter == next)
		{
			holder_2->next = holder->next;
			free(holder);
			return (1);
		}
		holder_2 = holder;
		holder = holder->next;
		counter++;
	}
	return (1);
}
