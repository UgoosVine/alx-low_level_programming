#include "main.h"

int real_prime(int n, int p);

/**
 * is_prime_number - Checks is integer is a prime number
 * @n: parameter checked
 *
 *  Return: If prime return 1 and f not return 0.
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - checks if integer is a prime number recursively
 * @n: parameter checked
 * @p: para 2
 *
 * Return: If prime return 1 and if mot 0.
 *
 */

int real_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (real_prime(n, p - 1));
}
