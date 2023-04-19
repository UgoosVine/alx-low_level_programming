#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates over each array of an element and
 * prints on a newline
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: Pointer to print
 *
 * Return: 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
