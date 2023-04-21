#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - The program prints numbers.
 * @separator: The string to separate numbers.
 * @...: Variable number of numbers.
 * @n: Number of int. to function.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int j;

	va_start(numbers, n);

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", va_arg(numbers, int));

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
