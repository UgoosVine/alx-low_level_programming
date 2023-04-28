#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a new linked list.
 * @head: Double pointer to the list_t.
 * @str: String for new node.
 *
 * Return: Address of the new element or Null if otherwise.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old;
	unsigned int p = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (p = 0 ; str[p] ; p++)
		;
	new->len = p;
	new->next = NULL;
	old = *head;

	if (old == NULL)
		*head = new;
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}
	return (*head);
}
