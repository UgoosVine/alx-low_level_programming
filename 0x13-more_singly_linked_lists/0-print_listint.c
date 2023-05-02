#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a linked list
 * @h: The linked list of listint_t
 *
 * Return: Number of nodes.
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
