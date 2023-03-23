#include "main.h"

/**
 * _isdigit - This checks for digits
 *
 * @c: parameter checked
 *
 * Return: 1 and 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
