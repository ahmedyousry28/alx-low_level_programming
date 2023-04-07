#include "main.h"

/**
 * _sqrt_recursion - the essential
 *
 * @n: int n
 *
 * Return: integer
 *
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - implement of sqrt_recursion
 *
 * @n: integer var1
 * @i: integer var2
 *
 * Return: sqrt
 *
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
