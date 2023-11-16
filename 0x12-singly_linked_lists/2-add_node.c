#include "lists.h"

/**
 * add_node- Adds a new node at the begining of a list_t list
 * @head: A pointer to the list_t
 * @str: The string to be added to the list_t list
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *another_one;

	another_one = malloc(sizeof(list_t));

	if (another_one == NULL)
		return (NULL);
	another_one->str = strdup(str);
	another_one->len = strlen(str);
	another_one->next = (*head);
	(*head) = another_one;
	return (another_one);
}
