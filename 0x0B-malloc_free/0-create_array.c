#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of array
 * @c: Char in the array
 *
 * Return: The array.
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);


}
