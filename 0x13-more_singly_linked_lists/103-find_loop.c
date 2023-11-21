#include "lists.h"

/**
 * find_listint_loop- finds the loop in a linked list
 * @head: a pointer to the first node
 *
 * Return: The address of the node where the loop starts
 */

listint_t *_find_loop_start(listint_t *head, listint_t *current);
int  _loop_confirmer(listint_t *loop_start, listint_t *current);
listint_t _find_listint_loop(listint_t  *head);

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current;
	listint_t *loop_start;

	current =  head;

	while (current)
	{
		loop_start = _find_loop_start(head, current);

		if (loop_start != NULL)
			if ((_loop_confirmer(loop_start, current)) == 0)
				return (current);
		current = current->next;
	}

	return (NULL);
}

listint_t *_find_loop_start(listint_t *head, listint_t *current)
{
	listint_t *holder;

	holder = head;

	while (holder != current)
	{
		if (holder->n == current->n)
			return (holder);
		holder = holder->next;
	}
	return (NULL);
}

int _loop_confirmer(listint_t *loop_start, listint_t *current)
{
	while (loop_start != current)
	{
		if (loop_start->n != current->n)
			return (1);
		loop_start = loop_start->next;
	}
	return (0);
}
