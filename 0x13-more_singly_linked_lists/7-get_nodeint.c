#include "lists.h"

/**
 * get_nodeint_at_index - The fucntion returns the node at a particur
 * index in a linked list.
 * @head: First node in liked list
 * @index: Index of node to return
 *
 * Return: index to node been searched for, or NUll otherwise.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *old = head;

	while (old && x < index)
	{
		old = old->next;
		x++;
	}
	return (old ? old : NULL);
}
