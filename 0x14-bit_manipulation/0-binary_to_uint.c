#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - The function converts a binary number to unsigned int.
 * @b: String carrying binary number.
 *
 * Return: Number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int deci = 0;

	if (!b)
		return (0);

	for (x = 0 ; b[x] ; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		deci = 2 * deci + (b[x] - '0');
	}
	return (deci);
}
