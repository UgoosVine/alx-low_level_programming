#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints every arguement it receives.
 * @argc: para 1
 * @argv: para 2
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
