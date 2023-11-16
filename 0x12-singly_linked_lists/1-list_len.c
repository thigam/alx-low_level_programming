#include "lists.h"

/**
 * list_len- Returns the number of elements in a list_t list
 * @h: pointer to the first element of a list_T list
 *
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	int nod = 0;

	while (h != NULL)
	{
		h = h->next;
		nod++;
	}
	return (nod);
}
