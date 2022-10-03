#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array of int
 * @width: number of columns for 2D array
 * @height: number of rows for 2D array
 * Return: pointer to a 2D array, NULL on error
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
