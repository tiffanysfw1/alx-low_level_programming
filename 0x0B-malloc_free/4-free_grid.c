#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int k;
for (k = 0; k < height; k++)
free(grid[k]);
free(grid);
}
