#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The program returns the sum of all
 * its parenthesis.
 * @n: Number of parenthesis to function.
 * @...: Variable number of parenthsis for calculating sum.
 *
 * Return: return 0 if n == 0 else the sum of all parenthesis.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0 ; x < n ; x++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
