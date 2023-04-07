#include "main.h"

/**
 * _strlen_recursion - size
 * @s: this is pointer to string
 * Return: the recursion
 *
 */



int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
