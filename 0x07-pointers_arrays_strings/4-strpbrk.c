#include "main.h"

/**
 * *_strpbrk - The function searches a string for any of a set of bytes.
 * @s: para 1
 * @accept: input
 *
 * Return: 0.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int p;
	while (*s)
	{
		for (p = 0 ; accept[p] ; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return ('\0');
}
