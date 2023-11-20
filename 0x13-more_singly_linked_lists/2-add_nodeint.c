#include "lists.h"

/**
 * add_nodeint- Adds a new node to the begining of a listint_t list
 * @head: A pointer to the pointer to the first node
 * @n: The integer element of the new node
 * Return: A pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *holder = *head;
	listint_t *another;

	another = malloc(sizeof(listint_t));

	if (another == NULL)
	{
		return (NULL);
	}

	another->n = n;
	another->next = holder->next;
	*head = another;
	return (another);
}
