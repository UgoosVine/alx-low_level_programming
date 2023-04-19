#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two integers.
 * @a: 1st number
 * @b: 2nd number
 * Return: Sum of two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of two integers
 * @a: 1st number
 * @b: 2nd number
 * Return: Difference of two integers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns multiplication of two integers.
 * @a: 1st number
 * @b: 2nd number
 * Return: Multiplication of two integers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two integers.
 * @a: 1st number
 * @b: 2nd number
 * Return: Quotient of two integers.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two integers
 * @a: 1st number
 * @b: 2nd number
 * Return: Remainder of division of two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
