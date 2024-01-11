#include "lists.h"

/**
 * sum_dlistint- Returns the sum of all the data(n) of a dlistint_t linked list
 * @head: A pointer to a pointer to the first node;
 *
 * Return: The sum, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *holder;
	int sum;

	if (head == NULL)
		return (0);

	holder = head;
	sum = 0;

	while (holder != NULL)
	{
		sum += holder->n;
		holder = holder->next;
	}

	return (sum);
}
