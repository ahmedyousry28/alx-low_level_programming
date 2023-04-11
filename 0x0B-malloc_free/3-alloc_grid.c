#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a two dimensional array
 *
 * @width: the width of string
 *
 * @height: the height of the string
 *
 * Return: A pointer
 *
 *
 */


int **alloc_grid(int width, int height)
{
	int i, j, x;
	int  **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * (height));

	if (p == NULL)
		return (NULL);
	for (x = 0; x < height; x++)

	{
		p[x] = malloc(sizeof(int) * width);

		if (p[x] == NULL)
		{

			for (; x >= 0; x--)
				free(p[x]);

			free(p);

			return (NULL);

		}
	}

	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width ; j++)
			p[i][j] = 0;
	}
	return (p);
}
