#include "lists.h"

/**
 * print_listint_safe- prints a listint_t linked list
 * @head: a pointer to the first node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *holder;
	size_t counter;

	holder = head;
	counter = 0;

	if (holder == NULL)
		exit(98);

	while (holder)
	{
		printf("[%p] %d", holder, holder->n);
		holder = holder->next;
		counter++;
	}
	return (counter);
}
