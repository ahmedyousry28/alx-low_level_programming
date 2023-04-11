#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two dimensions array
 *
 * @grid: 2d grid
 *
 * @height: this is a height dimension of grid
 *
 * Description: free memory of grid
 *
 * Return: No var returns
 *
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
