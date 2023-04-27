#include "lists.h"

/**
 * list_len - this determines length of linked list.
 *
 * @h: a pointer to first node.
 *
 * Return: the size of list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
