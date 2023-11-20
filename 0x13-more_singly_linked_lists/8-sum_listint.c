#include "lists.h"

/**
 * sum_listint- Finds the sum of all data(n) of a listint_t linked list
 * @head: A pointer to the first node
 *
 * Return: the sum, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *holder;
	int sum;

	holder = head;
	sum = 0;

	if (holder == NULL)
		return (0);

	if (holder->next != NULL)
		sum = sum_listint(holder->next);
	sum += holder->n;
	return (sum);
}
