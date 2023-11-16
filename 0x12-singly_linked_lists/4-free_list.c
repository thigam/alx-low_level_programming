#include "lists.h"

/**
 * free_list- Frees a list_t list
 * @head: A pointer to the first node in the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
