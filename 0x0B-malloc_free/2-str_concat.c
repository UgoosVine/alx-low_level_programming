#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - The program concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatemated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int l = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	s = malloc(1 + (sizeof(char) * l));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
