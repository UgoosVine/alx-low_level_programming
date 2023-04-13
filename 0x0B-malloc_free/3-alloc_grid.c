#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width array
 * @height: height array
 *
 * Return: A pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		p[i] = malloc(sizeof(int) * width);

			if (p[i] == NULL)
			{
				for (; i >= 0 ; i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			p[i][j] = 0;
	}
	return (p);
}
