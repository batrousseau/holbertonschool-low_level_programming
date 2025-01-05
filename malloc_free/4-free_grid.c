#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - frees a 2 dimensional integer grid
* previously created by alloc_grid
* @grid: the 2 dimensionnal array
* @height: height of the array
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
int i = 0;

/* Getting width */


for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

}
