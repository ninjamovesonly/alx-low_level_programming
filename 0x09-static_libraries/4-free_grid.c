#include <stdlib.h>

/**
 * free_grid - main function
 * @grid: pointer to a pointer
 * @height: numbdf
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
