#include <stdlib.h>

/**
 * free_grid - Free memory
 * @grid: The 2D array
 * @height: The height of the 2D array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
