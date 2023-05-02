#include "lists.h"

/**
 * add_nodeint - This add a new node at the beginning of a linked list
 * @head: Pointer to 1st node in list
 * @n: Data to insert in new node
 *
 * Return: Poiinter to new node, or NULL otherwise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
