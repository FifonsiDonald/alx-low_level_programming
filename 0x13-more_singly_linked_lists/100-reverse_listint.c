#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head
 * Return: a pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = (*head);
		(*head) = nxt;
	}
	(*head) = prv;
	return (*head);
}
