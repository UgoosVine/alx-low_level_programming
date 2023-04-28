#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a node at the start of a
 * linked list.
 * @head: Double pointer to the linked list.
 * @str: new string to add in node
 *
 * Return: Address of new element or NULL if fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
