#include "lists.h"

/**
 * free_listint_safe- frees a listint_t list
 * @h: a pointer to a pointer to the first node
 *
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *holder;
	listint_t *freed;
	int sum;
	
	sum = 0;
	holder = *h;

	if (holder == NULL)
		return (0);
	
	while (holder)
	{
		freed = holder;
		holder = holder->next;
		free(freed);
		sum++;
	}
	
	*h = NULL;
	return (sum);
}
