#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - A function that creates and array of integers
 * @min: para 1
 * @max: para 2
 *
 * Return: Pointer to new arrays
 *
 */

int *array_range(int min, int max)
{
	int *pt;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
		pt[i] = min++;
	return (pt);
}
