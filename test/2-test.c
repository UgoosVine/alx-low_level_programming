#include "test.h"
#include <stdio.h>

/**
 * some_function - The program checks the vale of i
 *
 * Return: i.
 */

int some_function(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	return (i);
}
