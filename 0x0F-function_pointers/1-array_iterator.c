#include "function_pointers.h"
/**
 * array_iterator - execute the function on each element
 * of the array.
 *
 * @array: the given array.
 *
 * @size: the size of the array.
 *
 * @action: A pointer to function
 *
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
