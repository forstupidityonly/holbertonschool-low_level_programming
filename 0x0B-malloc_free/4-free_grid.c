#include "holberton.h"
/**
  * free_grid - frees a grid
  * @grid: the **array
  * @height: the heaight
  * Return: on fail
  */
void free_grid(int **grid, int height)
{
	if (!grid)
		return (NULL);
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
