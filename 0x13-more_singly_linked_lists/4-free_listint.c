#include "lists.h"

/**
 * free_listint- Frees a  listint_t list
 * @head: A pointer to the first node in the list
 *
 * Return: nothing
 */

void free_listint(listint *head)
{
	free(head);
}
