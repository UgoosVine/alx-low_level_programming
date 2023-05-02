#include "lists.h"

/**
 * insert_nodeint_at_index - The function inserts a new node at a particular
 * position in a linked list
 * @head: Pointer to first node in linked list
 * @n: data to insert in new node.
 * @idx: Index where to add the new node
 *
 * Return: Pointer to the new node, or NULL otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *old = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0 ; old && x < idx ; x++)
	{
		if (x == idx - 1)
		{
			new->next = old->next;
			old->next = new;
			return (new);
		}
		else
			old = old->next;

	}
	return (NULL);
}
