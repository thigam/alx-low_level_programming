#include "lists.h"

/**
 * insert_nodeint_at_index- Inserts a new node at a given position
 * @head: A pointer to a pointer to the first node
 * @idx: Index where the new node should be added
 * @n: Integer contained in the new node
 *
 * Return: address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *holder;
	listint_t *another;

	holder = *head;
	counter = 0;

	if (idx == 0)
	{
		another = malloc(sizeof(listint_t));
		if (another == NULL)
			return (NULL);
		another->n = n;
		another->next = holder->next;
		*head = another;
		return (another);
	}

	idx--;
	another = malloc(sizeof(listint_t));

	while (counter <= idx)
	{
		if (holder == NULL)
			return (NULL);
		if (counter == idx)
		{
			if (another == NULL)
				return (NULL);
			another->n = n;
			another->next = holder->next;
			holder->next = another;
			return (another);
		}
		counter++;
		holder = holder->next;
	}
	return (another);
}
