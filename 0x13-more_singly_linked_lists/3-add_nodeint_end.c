#include "lists.h"

/**
 * *add_nodeint_end - This adds a node at the end of a linked list
 * @head: Pointer to trhe first element in list
 * @n: Data to put in new element
 *
 * Return: pointer to new node, or NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (old->next)
		old = old->next;

	old->next = new;

	return (new);
}
