#include "main.h"

/**
 * set_bit - The function set a bit at particular index to 1.
 * @n: Pointer to number to change.
 * @index: index of bit to set to 1.
 *
 * Return: 1 if success, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
		return (1);
}
