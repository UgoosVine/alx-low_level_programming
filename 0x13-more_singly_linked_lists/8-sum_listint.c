#include "lists.h"

/**
 * sum_listint - Checks the sum of all the data in a listint_t list
 * @head: First node in a linked list
 *
 * Return: Sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *old = head;

	while (old)
	{
		sum = sum + old->n;
		old = old->next;
	}
	return (sum);
}
