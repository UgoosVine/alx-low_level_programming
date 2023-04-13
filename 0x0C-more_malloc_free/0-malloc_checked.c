#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A program that allocates memory wit malloc
 * @b: Bytes to allocate
 *
 * Return: Pointer to memory alloated
 *
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
