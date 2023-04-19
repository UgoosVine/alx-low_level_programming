#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its own opcodes
 * @argc: number of arguments
 * @argv: The array
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int byt, i;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg = (char *)main;

	for (i = 0 ; i < byt ; i++)
	{
		if (i == byt - 1)
		{
			printf("%02hhx\n", arg[i]);
			break;
		}
		printf("%02hhx ", arg[i]);
	}
	return (0);
}
