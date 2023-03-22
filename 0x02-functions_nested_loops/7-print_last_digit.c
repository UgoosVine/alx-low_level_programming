#include "main.h"

/**
 * print_last_digit - The program prints the last
 * digit of a number
 *
 * @x: parameter to be cheked
 *
 * Return: returns y.
 */

int print_last_digit(int x)
{
	int k;

	k = x % 10;
	if (x < 0)
	{
		k = -k;
	}
	_putchar(k + '0');
	return (k);
}
