#include "main.h"
/**
 * free_grid - frees a 2 dimensional
 * @grid: input pointer
 * @height: input number
 * 
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
