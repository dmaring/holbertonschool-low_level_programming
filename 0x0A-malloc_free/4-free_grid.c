#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid from memory
 * @grid: input 2 dim grid as double pointer
 * @height: input height as integer
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
