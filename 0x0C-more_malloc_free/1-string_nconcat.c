#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Cncatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes too cocatenate
 *
 * Return: pointer to concatenated string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i = 0, j = 0, tan1 = 0, tan2 = 0;

	while (s1 && s1[tan1])
		tan1++;
	while (s2 && s2[tan2])
		tan2++;

	if (n < tan2)
		ch = malloc(sizeof(char) * (tan1 + n + 1));
	else
		ch = malloc(sizeof(char) * (tan1 + tan2 + 1));

	if (!ch)
		return (NULL);

	while (i < tan1)
	{
		ch[i] = s1[i];
		i++;
	}
	while (n < tan2 && i < (tan1 + n))
		ch[i++] = s2[j++];

	while (n >= tan2 && i < (tan1 + tan2))
		ch[i++] = s2[j++];

	ch[i] = '\0';
	return (ch);
}
