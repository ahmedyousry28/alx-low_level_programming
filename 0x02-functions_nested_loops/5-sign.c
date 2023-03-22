#include"main.h"
/**
 * print_sign - this function check the nature of numbers
 *
 * @n: variable
 *
 * Return: 1 if positive , -1 if num is negative and return 0 if equl zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
