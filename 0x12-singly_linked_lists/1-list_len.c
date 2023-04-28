#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - The program returns the number of elements in a
 * linked list.
 * @h: Pointer to the list
 *
 * Return: Count of element in h.
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
