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
	int i, j;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	st = malloc(sizeof(char) * (i + j + 1));
	if (st == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		st[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		st[i] = s2[j];
		i++, j++;
	}
	st[i] = '\0';
	return (st);
}
