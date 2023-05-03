#include "lists.h"

/**
 * listint_len - that prints a linked lists.
 *
 * @h: a pointer to first node.
 *
 * Return: the size of list.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
