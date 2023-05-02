#include "lists.h"

/**
 * pop_listint - Deletes head note of linked list
 * @head: Pointer to first elment in linked list
 *
 * Return: Data that was deleted inside element. or 0
 * if list empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *old;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	old = (*head)->next;
	free(*head);
	*head = old;

	return (number);
}
