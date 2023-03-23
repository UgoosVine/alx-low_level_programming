#include "main.h"

/**
 * positive_or_negative - Checks whether the parameter is positve 
 * or negative.
 *
 * @i: parameter to check
 *
 * Return: 0.
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else 
		printf("%d is positive\n", i);
}
