#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program adds positive numbers.
 * @argc: para 1
 * @argv: para 2
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc ; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
