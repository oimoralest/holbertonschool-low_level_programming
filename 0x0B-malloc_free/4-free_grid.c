#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional array created by alloc_grid function
 *@grid: pointer to the array of 2 dimensions
 *@height: height of the array
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	while ((height - 1) >= 0)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}
