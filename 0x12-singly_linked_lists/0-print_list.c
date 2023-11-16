#include "lists.h"

/**
 * print_list- Prints all the elements of a list_t list
 * @h: A pointer to the first element
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nod = 0;

	while (h != NULL)
	{
		if (h.str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h.len, h.str);
		}

		h = h.next;
		nod++;
	}
	return (nod);
}
