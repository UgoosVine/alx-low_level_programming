#include "main.h"
#include <stdio.h>

/**
 * main - The program calculates the natural numbers of
 * 3 or 5
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int can;

	/* for (i = 0 ; i < 10 ; i++) */
	for (i = 0 ; i < 1024 ; i++)
	{
		if
			((i % 3) == 0 || (i % 5) == 0)
			can = can + i;
	}
	printf("%d\n", can);
	return (0);
}
