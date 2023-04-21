#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - The program prints strings plus newline
 * @separator: to sparate strings.
 * @...: Variable number of strings.
 * @n: number of strings to function.
 *
 * Return; void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;

	unsigned int x;

	va_start(strs, n);

	for (x = 0 ; x < n ; x++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strs);
}
