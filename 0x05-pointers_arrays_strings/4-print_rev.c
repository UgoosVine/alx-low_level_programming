#include "main.h"
/**
 * print_rev - Print in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; s[i] >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
