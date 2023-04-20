#include "function_pointers.h"
/**
 * int_index - searche for an integer.
 *
 * @array: the array with data.
 *
 * @size: the size of the array.
 *
 * @cmp: A function pointer.
 *
 * Return: count of integer.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
