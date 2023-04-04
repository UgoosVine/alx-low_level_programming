#include "main.h"

/**
 * unsigned int _strspn - The function gets the length of a prefix substring.
 * @s: par 1
 * @accept: para 2
 *
 * Return: 0.
 *
 */

nsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (0);
}
