#include <stdlib.h>
#include <time.h>
#include <stdio.>
/**
 * main - prints the last digit of a randomly generated number
 *
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is zero");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}
		printf("\n");
	return (0);
}
