#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2d grid
 * @height: the given height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
