#include"main.h"
/**
 * times_table - function create an table
 *
 * @i, j, res: one varaiablw ahme dyousry mohamed
 *
 * Return: table 1*9
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
			res = i * j;
			_putchar(res);
	}
}

