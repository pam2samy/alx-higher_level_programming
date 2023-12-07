#include "lists.h"

/**
 * get_dnodeint_at_index - return node index
 * @head: pointer to current head
 * @index: index if the node
 *
 * Return: node address
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
