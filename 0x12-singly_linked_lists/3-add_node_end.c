#include "lists.h"

/**
 * add_node_end- Adds a new node at the end of a list_t list
 * @head: A pointer to the list
 * @str: string to be added
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t ender;

	ender = malloc(sizeof(list_t));

	if (ender == NULL)
		return (NULL);

	ender->str = strdup(str);
	ender->len = strlen(str);
	ender->next = NULL;
	while ((*head)->next != NULL)
	{
		ender->next = (*head)->next;
		(*head) = ender->next;
	}
	(*head)->next = ender->next;
	return (ender);
}
