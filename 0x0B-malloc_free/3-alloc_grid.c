#include "holberton.h"
/**
  * alloc_grid - make a grid
  * @width: width
  * @height: height
  * Return: yes
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, y, x;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		array[y] = malloc(sizeof(int) * width);
		if (!array[y])
		{
			for (x = 0; x < y; x++)
				free(array[x]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
