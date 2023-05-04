#include "main.h"

/**
 * print_binary - The program printsbinary equivalent of decimal number
 * @n: Number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int present;

	for (x = 63 ; x >= 0 ; x--)
	{
		present = n >> x;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
