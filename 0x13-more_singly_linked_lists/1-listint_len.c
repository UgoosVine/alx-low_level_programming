#include "lists.h"

/**
 * listint_len - Prints the number of elements in a linked list
 * @h: Linked list listint_t to tranverse
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
