#include "main.h"

/**
 * real_sqrt_recursion - The function finds the natural
 * square root of numbers reursively
 * @n: Para 1
 * @p: para 2
 *
 * Return: the result
 *
 */

int real_sqrt_recursion(int n, int p)

/**
 * _sqrt_recursion - Is a function that returns the natural
 * square root of a number.
 * @n: parameter t check
 *
 * Return: squre root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - The function finds the natural
 * square root of numbers reursively
 * @n: Para 1
 * @p: para 2
 *
 * Return: the result
 *
 */

int real_sqrt_recursion(int n, int p)
{
	if (p * p > n)
	{
		return (-1);
	}
	if (p * p == n)
	{
		return (p);
	}
	return (real_sqrt_recursion(n, p + 1));
}
