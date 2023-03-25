#include "main.h"

/**
 * print_alphabet - Print small letters alphabetically
 *
 * Return: Returns 0 always.
 *
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
