#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name
 * @name: string to print
 * @f: A pointer to function
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
