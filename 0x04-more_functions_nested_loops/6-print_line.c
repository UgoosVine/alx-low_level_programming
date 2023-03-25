#include "main.h"

/**
 * print_line - Prints a straight line
 *
 * @n: parameter to be checked
 *
 * Return: 0;
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
