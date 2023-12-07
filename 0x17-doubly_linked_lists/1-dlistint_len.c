#include "lists.h"

/**
 * dlistint_len - return dlist length
 * @h: head node address
 *
 * Return: List size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

