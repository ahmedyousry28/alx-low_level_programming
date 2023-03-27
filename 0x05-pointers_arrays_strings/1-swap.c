#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: the first num.
 * @b: the second num.
 *
 */
void swap_int(int *a, int *b)
{
	int s;

	s = 0;
	s = *a;
	*a = *b;
	*b = s;
}
