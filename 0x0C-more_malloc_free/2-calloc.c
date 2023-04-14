#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - The program fills memory with costant byte
 * @s: para 1
 * @b: para 2
 * @n: number of times to copy b
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - A program that alloates memory for an array using malloc
 * @nmemb: number of element
 * @size: size of element
 *
 * Return: Pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);
	_memset(pt, 0, nmemb * size);
	return (pt);
}
