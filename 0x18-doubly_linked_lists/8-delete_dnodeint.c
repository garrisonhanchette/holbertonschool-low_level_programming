#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a given node
 * @head: double pointer to head of linked list
 * @index: node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (*head == temp)
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);

	return (1);
}
