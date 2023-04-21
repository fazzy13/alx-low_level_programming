#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated for a 2-dimensional array of integers
 * @grid: Pointer to the 2-dimensional array (grid) to be freed
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

