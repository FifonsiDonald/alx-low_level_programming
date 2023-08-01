#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of a list.
 *
 * Return: nodes.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *newhead;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	newhead = (*head)->next;
	free(*head);
	*head = newhead;

	return (n);
}
