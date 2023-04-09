#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: para 1
 * @argv: para 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cn;
	int cns = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cn = atoi(argv[1]);

	while (cn > 0)
	{
		if (cn >= 25)
			cn = cn - 25;
		else if (cn >= 10)
			cn = cn - 10;
		else if (cn >= 5)
			cn = cn - 5;
		else if (cn >= 2)
			cn = cn - 2;
		else if (cn >= 1)
			cn = cn - 1;
		cns++;
	}
	printf("%d\n", cns);
	return (0);
}
