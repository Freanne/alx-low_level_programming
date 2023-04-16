#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid : a grid created by alloc_grid function.
 * @height : the height of array.
 *
 * Return : void.
 *
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);


free(grid);

}

