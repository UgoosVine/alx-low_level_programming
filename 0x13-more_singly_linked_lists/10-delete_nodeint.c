#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Pointer to the first element in a list
 * @index:Index of node to delete
 *
 *Return: 1 if succesful, or -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old = *head;
	listint_t *new = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(old);
		return (-1);
	}

	while (x < index - 1)
	{
		if (!old || !(old->next))
			return (-1);
		old = old->next;
		x++;
	}
	new = old->next;
	old->next = new->next;
	free(new);

	return (1);
}
