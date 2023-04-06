#include <stdio.h>

/**
 * main -summation of two arrays
 *
 * Return: 0.
 */

int main(void)
{
	int arr1[5];
	int arr2[5];
	int sumarr[5];
	int i;

	for (i = 0 ; i < 5 ; i++)
		scanf("%d", &arr1[i]);
	for (i = 0 ; i < 5 ; i++)
		scanf("%d", &arr2[i]);
	for (i = 0 ; i < 5 ; i++)
		printf("Sum of Index of arr1 and arr2 %d is = %d", i, sumarr[i]);
}
