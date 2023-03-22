#include "main.h"

/**
 * _abs - The program computes the absolute value
 * of an integer
 *
 * @x: parameter to be checked
 *
 * Return: returns x when successful.
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
