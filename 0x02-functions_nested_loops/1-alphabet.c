#include "main.h"

/**
 * print_alphabet - Print small letters alphabetically
 *
 * Return: Returns 0 always.
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; 'a' <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
