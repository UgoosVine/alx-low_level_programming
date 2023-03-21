#include "main.h"

/**
 * _islower -This function prints lower case letters
 *
 * @c: parameter to be printed
 *
 * Return: return 1 if c is lower case and 0
 * otherwise.
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
