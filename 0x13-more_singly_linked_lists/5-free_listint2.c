#include "lists.h"

/**
 * free_listint2 - Frees linked list
 * @head: Pointer to listint_t t free
 */

void free_listint2(listint_t **head)
{
	listint_t *old;

	if (head == NULL)
		return;

	while (*head)
	{
		old = (*head)->next;
		free(*head);
		*head = old;
	}
	*head = NULL;
}
