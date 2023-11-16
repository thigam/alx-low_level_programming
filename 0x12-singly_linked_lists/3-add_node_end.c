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
	list_t *ender, *temp;

	ender = malloc(sizeof(list_t));

	if (ender == NULL)
		return (NULL);

	ender->str = strdup(str);
	ender->len = strlen(str);
	ender->next = NULL;
	temp = (*head);
	if (temp == NULL)
	{
		(*head) = ender;
		return (ender);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ender;
	return (ender);
}
