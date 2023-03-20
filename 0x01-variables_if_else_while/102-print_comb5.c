#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always return 0.
 *
 */

int main(void)
{
	int j;
	int k;

	for (j = 0; j <= 99; j++)
	{
		for (k = j ; k <= 99; k++)
		{
			if (j != k)
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				putchar(' ');
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');
				if (j * 100 + k != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
