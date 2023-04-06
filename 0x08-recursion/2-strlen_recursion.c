#include "main.h"

/**
 * _strlen_recursion - The function returns the length of a string.
 * @s: para 1.
 *
 * Return: Length of strin.
 *
 */

int _strlen_recursion(char *s)
{
	int stringlength = 0;

	if (*s)
	{
		stringlength++;
		stringlength += _strlen_recursion(s + 1);
	}
	return (stringlength);
}
