#include "main.h"

/**
 * *_memcpy - The function copies memory area.
 * @dest: Memory location
 * @src: Memory copied
 * @n: number of byte.
 *
 * Return: Memory copied with changed byte.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int o = 0;
	int p = n;

	for (; o < p ; o++)
	{
		dest[o] = src[o];
		n--;
	}
	return (dest);
}
