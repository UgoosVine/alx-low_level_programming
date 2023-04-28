#include <stdio.h>
#include "lists.h"

/**
 * print_list - The program prints every elements of a linked list
 * @h: Pointer to the list_t list
 *
 * Return: Count of nodes printed.
 */

size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
