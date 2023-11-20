#include "lists.h"

/**
 * add_nodeint_end- Adds a new node to the end of a listint_t list
 * @head: A pointer to a pointer to the first node
 * @n: The integer component of the new node
 *
 * Return: the address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *holder;
	listint_t *another;

	another = malloc(sizeof(listint_t));

	if (another == NULL)
		return (NULL);

	holder = *head;

	while (holder->next)
	{
		holder = holder->next;
	}

	another->n = n;
	another->next = NULL;
	holder->next = another;

	return (another);
}
