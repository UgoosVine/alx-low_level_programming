#include "lists.h"
#include <stdlib.h>

/**
 * free_list - The program frees linked list.
 * @head: list to be freed.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *q;

	while (head)
	{
		q = head->next;
		free(head->str);
		free(head);
		head = q;
	}
}
