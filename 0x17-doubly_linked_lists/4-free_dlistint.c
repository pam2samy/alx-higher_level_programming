#include "lists.h"

/**
 * free_dlistint - free dlist
 * @head: pointer to current head
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free (node);
	}
}
