#include "main.h"

/**
 * flip_bits - Calculates number of bits to change.
 * @n: para 1
 * @m: para 2
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int present;
	unsigned long int unique = n ^ m;

	for (x = 63 ; x >= 0 ; x--)
	{
		present = unique >> x;
		if (present & 1)
			count++;
	}
	return (count);
}
