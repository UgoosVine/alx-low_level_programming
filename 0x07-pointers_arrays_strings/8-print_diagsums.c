#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: para 1
 * @size: para 2
 *
 * Return: 0.
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumA = 0;
	int sumB = 0;

	for (i = 0 ; i < size ; i++)
	{
		sumA = sumA + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumB += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumA, sumB);
}
