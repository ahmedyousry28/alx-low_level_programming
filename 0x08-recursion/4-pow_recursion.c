#include "main.h"

/**
 * _pow_recursion - power of recursion
 * @x: integer var1
 * @y: integervar2
 *
 *
 * Return: the recursion
 *
 */



int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
