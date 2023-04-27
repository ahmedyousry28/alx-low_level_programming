#include "lists.h"

/**
 * _strlen - this returns the length of a string.
 *
 * @s: the string which length to check.
 *
 * Return: an integer length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - this prints a linked lists.
 *
 * @h: a pointer to first node.
 *
 * Return: the size of list.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
