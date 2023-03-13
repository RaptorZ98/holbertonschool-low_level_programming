#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to 2d array
 * @width: param 1
 * @height: param 2
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **w;
	int n, t, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	w = malloc(sizeof(int *) * height);
	if (w == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		w[n] = malloc(sizeof(int) * width);
		if (w[n] == NULL)
		{
			for (k = 0; k <= n; k++)
				free(w[k]);
			free(w);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (t = 0; t < width; t++)
			w[n][t] = 0;
	}
	return (w);
}
