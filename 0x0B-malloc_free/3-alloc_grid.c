#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i = 0, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
while (i < height)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
j = 0;
while (j < i)
{
free(grid[j]);
j++;
}
free(grid);
return (NULL);
}
i++;
}
i = 0;
while (i < height)
{
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
return (grid);
}
