#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Create matriz whit 0
 * @width: Files to the matriz
 * @height: Column to the matriz
 * Return: Matriz full whict 0
 */

int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matriz = (int **) malloc(height * sizeof(int *));

	if (matriz == NULL)
	{
		return (0);
	}

	for (i = 0; i < width; i++)
	{
		matriz[i] = (int *) malloc(width * sizeof(int));

		if (matriz[i] == NULL)
		{
			return (0);
			free(matriz);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}
	return (matriz);
}
