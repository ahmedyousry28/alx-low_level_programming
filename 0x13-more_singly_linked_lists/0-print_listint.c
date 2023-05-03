#include "lists.h"

/**
 * print_listint - that prints a linked lists.
 *
 * @h: a pointer to first node.
 *
 * Return: the size of list.
 *
 */

size_t print_listint(const listint_t *h)
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
