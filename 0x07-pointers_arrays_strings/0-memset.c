#include "main.h"

/**
 * *_memset - This program fills memory with a constant byte.
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 *
 * Return: value of *s.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0 ; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
