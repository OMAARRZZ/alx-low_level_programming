#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2D grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i = 0;
if (grid == NULL || height <= 0)
{
return;
}
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
