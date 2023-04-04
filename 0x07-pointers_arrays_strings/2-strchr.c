#include "main.h"

/**
 * *_strchr - The function locates a character in a string.
 * @s: para 1
 * @c: para 2
 *
 * Return: 0.
 *
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0 ; s[k] >= '\0' ; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
