#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all arguements
 * @ac: para 1
 * @av: para 2
 *
 * Return: 0.
 *
 */

char *argstostr(int ac, char **av)
{
	int i, b, c = 0, d = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (b = 0 ; av[i][b] ; b++)
			d++;
	}
	d += ac;

	st = malloc(sizeof(char) * d + 1);
	if (st == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (b = 0; av[i][b] ; b++)
		{
			st[c] = av[i][b];
			c++;
		}
		if (st[c] == '\0')
		{
			st[c++] = '\n';
		}
	}
	return (st);
}
