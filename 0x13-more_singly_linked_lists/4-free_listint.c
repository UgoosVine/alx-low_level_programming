#include "lists.h"

/**
 * free_listint - Frees linked list
 * @head: Listint_t list to free
 */

void free_listint(listint_t *head)
{
	listint_t *old;

	while (head)
	{
		old = head->next;
		free(head);
		head = old;
	}
}
