#include "main.h"

/**
 * get_endianness - Checks i machine is little or big endian.
 * Return: 1 if small, 0 if big.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
