#include "lists.h"

/**
 * sum_dlistint - Sums values in a doubly linked list
 * @head: pointer to head of list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
