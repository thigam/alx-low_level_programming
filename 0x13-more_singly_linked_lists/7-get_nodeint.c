#include "lists.h"

/**
 * get_nodeint_at_index- Returns the nth node of a listint_t linked list
 * @head: A pointer to the first node
 * @index: The position of the node
 *
 * Return: A pointer to the node requested, NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *holder;
	unsigned int counter;

	holder = head;
	counter = 0;

	if (counter > index || head == NULL)
		return (NULL);
	if (counter = 0)
		return (holder);

	for (; counter <= index; counter++)
		holder = holder->next;

	if (holder == NULL)
		return (NULL);

	return (holder);
}
