#include <stdio.h>

/**
 * main - prints integers
 *
 * Return: 0.
 *
 */

int main(void)
{
	int a = 5;
	int b, c, d;

	b = ++a;
	c = a++;
	d = ++a;
	printf("%d\n", a);
       printf("%d\n", b);
       printf("%d\n", c);
       printf("%d\n", d);
}
