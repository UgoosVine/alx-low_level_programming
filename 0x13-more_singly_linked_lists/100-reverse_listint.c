#include "lists.h"
/**
 * reverse_listint - The function reverses a Linked list
 * @head: Pointer to first node in list
 *
 * Return: Pointer to the first node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;

	return (*head);
}
