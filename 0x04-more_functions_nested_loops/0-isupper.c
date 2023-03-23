#include "main.h"

/**
 * _isupper - Checks for uppecase character
 *
 * @c: parameter to check
 *
 * Return: 1 and 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
