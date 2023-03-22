#include "main.h"

/**
 * _isalpha - A program that checks for lower and upper case latter
 *
 * @c: parameter to be checked
 *
 * Return: returns 1 if c is a lower or upper case
 * and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
			return (1);
	else
		return (0);
}
