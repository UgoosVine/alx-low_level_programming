#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A program that returns pointer to a
 * newly allocated space in memory
 * @str: String to be duplicated
 * @
 * Return: Duplicated srting
 *
 */

char *_strdup(char *str)
{
	int j = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc(1 + (sizeof(char) * i));
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);

}
