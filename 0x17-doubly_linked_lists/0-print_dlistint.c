#unclude "lists.h"

/**
 * print_dlistint - prints the D-linked list
 * @h: the head node
 *
 * Return: List
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
