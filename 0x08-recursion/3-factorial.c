#include "main.h"

/**
 * factorial - The function returns the factorial of a given number.
 * @n: parameter checked
 *
 * Return: -1 if n lower than 0 and 1 if n is 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
