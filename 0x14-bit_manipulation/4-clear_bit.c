#include "main.h"

/**
 * clear_bit - Return value at a particular bit to zero.
 * @n: Pointer to number for change.
 * @index: index of bit to clear
 *
 * Return: 1 if success, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
