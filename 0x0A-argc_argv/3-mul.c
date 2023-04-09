#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two integers.
 * @argc: para 1
 * @argv: para 2
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a, b, mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
	}
	return (0);
}
