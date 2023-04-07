#include "main.h"

int cal_pal(char *s, int k, int lent);
int _strlen_recursion(char *s);

/**
 * is_palindrome - he fucntion detemines if string is a palindrome
 * @s: string checked
 *
 * Return: returns 1 if yes and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (cal_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - calculate the length of string
 * @s: string checked
 *
 * Return: Length of the string checked
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * cal_pal - Calculate if string is palidrome recursively
 * @s: srting checked
 * @k: parameter used
 * @lent: length of string
 *
 * Return: returns 1 if yes and 0 if no
 */

int cal_pal(char *s, int k, int lent)
{
	if (*(s + k) != *(s + lent - 1))
		return (0);
	if (k >= lent)
		return (1);
	return (cal_pal(s, k + 1, lent - 1));
}

